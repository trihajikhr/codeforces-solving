#include<iostream>
#include<string>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;
    while (true) {
        int idx = s.find("WUB");
        if (idx != -1) {
            for (int i=idx; i<idx+3; i++) {
                s[i] = ' ';
            }
        } else break;
    }
    cout << s;
    return 0;
}