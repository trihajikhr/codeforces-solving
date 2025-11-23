#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto& x : v) cin >> x;
    ranges::sort(v);

    if (k==0) {
        if (v[0] != 1) cout << 1 << "\n";
        else cout << -1 << "\n";
        return 0;
    }

    if (v[k-1] != v[k]) {
        cout << v[k-1] << "\n";
    } else {
        cout << -1 << "\n";
    }
    return 0;
}