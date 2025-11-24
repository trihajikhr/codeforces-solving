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
        int a = 0, b = 0;
        for (int i=0; i<6; i++) {
            if (i<3) {
                a += s[i] - '0';
            } else b += s[i] - '0';
        }
        cout << (a==b ? "YES" : "NO") << "\n";
    }
    return 0;
}