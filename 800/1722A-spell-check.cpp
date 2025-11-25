#include<iostream>
#include<algorithm>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    string temp = "Timur";
    ranges::sort(temp);
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s.length() != temp.length()) {
            cout << "NO\n";
        } else {
            ranges::sort(s);
            cout << (s == temp ? "YES" : "NO") << "\n";
        }
    }
    return 0;
}