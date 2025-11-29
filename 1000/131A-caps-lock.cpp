#include<iostream>
#include<cctype>
#include<algorithm>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;
    int cnt = 0;
    for (char & c : s) {
        if(isupper(c)) cnt++;
    }

    if (cnt == s.length()) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    } else if (s.length() - cnt == 1 && islower(s[0])) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
        cout << s;
    } else {
        cout << s;
    }
    return 0;
}