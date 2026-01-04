#include <algorithm>
#include<iostream>
#include<cctype>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;
    int n = 0;
    for (int i=0; i<s.length(); i++) {
        if (isupper(s[i])) n++;
    }

    if (n == s.length()) {
        ranges::transform(s, s.begin(), ::tolower);
        cout << s;
    } else if (n == s.length()-1 && islower(s[0])) {
        ranges::transform(s, s.begin(), ::tolower);
        s[0] = toupper(s[0]);
        cout << s;
    } else cout << s;

    return 0;
}