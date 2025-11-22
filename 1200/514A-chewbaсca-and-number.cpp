#include<iostream>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;
    for (int i=0; i<s.length(); i++) {
        if (i==0 && s[i] == '9') continue;
        if (s[i] > '4') {
            s[i] = '9' - (s[i] - '0');
        }
    }
    cout << s;
    return 0;
}