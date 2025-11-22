#include<iostream>
#include<cctype>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;
    if (islower(s[0])) s[0] = toupper(s[0]);
    cout << s;
    return 0;
}