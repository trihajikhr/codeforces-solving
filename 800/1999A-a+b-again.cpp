#include<bits/stdc++.h>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << (s[0]-'0') + (s[1]-'0') << "\n";
    }
    return 0;
}