#include<iostream>
#include<cctype>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;
    int l = 0, b= 0;
    for (char& c : s) (isupper(c) ? b++ : l++);

    if (l >= b) {
        for (int i=0; i<s.length(); i++) {
            cout << (char)tolower(s[i]);
        }
    } else {
        for (int i=0; i<s.length(); i++) {
            cout << (char)toupper(s[i]);
        }
    }
    return 0;
}