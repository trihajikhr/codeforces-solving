#include<iostream>
#include<unordered_map>
using namespace  std;

void solve() {
    int n;
    cin >>n ;
    unordered_map<int, int> dasmap;
    dasmap.reserve(n);
    for (int i=0, x; i<n; i++) {
        cin >> x;
        dasmap[x]++;
    }

    int ans = 0;
    for (const auto& [key, val]: dasmap) {
        if (val > key) ans += val - key;
        else if (val < key) ans += val;
    }
    cout << ans << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}