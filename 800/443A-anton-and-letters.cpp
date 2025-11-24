#include<iostream>
#include<set>
#include<cctype>
using namespace std;

auto main() -> int {
    string s;
    getline(cin, s);
    set<char> alfa;

    for (char& c : s) {
        if (isalpha(c)) alfa.insert(c);
    }

    cout << alfa.size();
    return 0;
}