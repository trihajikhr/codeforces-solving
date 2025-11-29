#include<iostream>
#include<string>
#include<cctype>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;

    string vow = "aoyeui";
    for (char&c : s) {
        c = tolower(c);
        if (vow.find(c) != string::npos) {
            continue;
        }
        cout << "." << c;
    }
    return 0;
}