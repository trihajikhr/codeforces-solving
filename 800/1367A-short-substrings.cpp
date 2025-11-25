#include<iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;
    cout << s[0];
    for (int i=1; i<s.length()-2; i+=2) {
        cout << s[i];
    }
    cout << s[s.length()-1] << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}