#include<iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;
    for (char& c : s) {
        c = tolower(c);
    }
    cout << (s == "yes" ? "YES" : "NO") << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}