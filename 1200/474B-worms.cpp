#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> data(n+1);
    for (int i=1; i<=n; i++) {
        int x;
        cin >> x;
        data[i] = data[i-1] + x;
    }

    int q;
    cin >> q;
    while (q--) {
        int a;
        cin >> a;
        cout << ranges::lower_bound(data, a) - data.begin() << '\n';
    }
    return 0;
}