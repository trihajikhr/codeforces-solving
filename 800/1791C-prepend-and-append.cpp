#include<iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i=0; i < n/2; i++) {
        if (s[i] != s[n-1-i]) ans++;
        else break;
    }

    cout << n - (2 * ans) << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}