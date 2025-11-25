#include<iostream>
#include<string>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() % 2) cout << "NO\n";
        else {
            int t = static_cast<int>(s.length());
            cout << (s.substr(0, t/2) == s.substr(t/2, t/2) ? "YES" : "NO") << "\n";
        }
    }
    return 0;
}