#include<iostream>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;
    string hel = "hello";
    int idx = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == hel[idx]) idx++;
        if (idx == 5) break;
    }
    cout << (idx == 5 ? "YES" : "NO");
    return 0;
}