#include<iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;
    if ((s[0]!='a') && (s[1]!='b') && (s[2] != 'c')) {
        cout << "NO\n";
    } else cout << "YES\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}