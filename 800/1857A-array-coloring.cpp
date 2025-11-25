#include<iostream>
#include<vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int odd = 0;
    for (int i=0, x; i<n; i++) {
        cin >> x;
        odd += x % 2;
    }
    cout << (odd % 2 ? "NO" : "YES") << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}