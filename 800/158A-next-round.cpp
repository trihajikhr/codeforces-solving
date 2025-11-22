#include<iostream>
#include<vector>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n+1);
    for (int i=1; i<= n; i++) cin >> v[i];
    int cnt = 0;
    for (int i=1; i<=n; i++) {
        if (v[i] >= v[k] && v[i] != 0) cnt++;
        else if (v[i] < v[k]) break;
    }
    cout << cnt << "\n";
    return 0;
}