#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;

auto main() -> int  {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l;
    cin >> n >> l;
    vector<double> len(n);
    for (auto& x : len) cin >> x;
    ranges::sort(len);
    double maks = -1;
    maks = max(len[0], l-len[n-1]);
    for (int i=0; i<n-1; i++) {
        maks = max(maks, (len[i+1]-len[i])/2);
    }

    cout << fixed << setprecision(10) << maks << "\n";
    return 0;
}