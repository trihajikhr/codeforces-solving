#include<iostream>
#include<string>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;
    if (s.find("1111111") != string::npos || s.find("0000000") != string::npos) {
        cout << "YES";
    } else cout << "NO";
    return 0;
}