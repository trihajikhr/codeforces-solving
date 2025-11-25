#include<iostream>
using namespace std;

void solve() {
    string t = "codeforces";
    string s;
    cin >> s;
    int ans = 0;
    for (int i=0; i<10; i++) {
        ans += t[i] != s[i];
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