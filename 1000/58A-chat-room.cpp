#include<iostream>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;

    string pass = "hello";
    int cur = 0;

    for (int i=0; i<s.length(); i++) {
        if (s[i] == pass[cur]) cur++;
        if (cur == 5) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}