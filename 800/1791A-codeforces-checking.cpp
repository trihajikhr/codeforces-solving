#include<bits/stdc++.h>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    string s = "codeforces";
    while (t--) {
        char c;
        cin >> c;
        cout << (s.find(c) != string::npos ? "YES" : "NO") << "\n";
    }
    return 0;
}