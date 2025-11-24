#include<set>
#include<iostream>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> alfa;
    for (char & c : s) {
        alfa.insert(tolower(c));
    }
    cout << (alfa.size() == 26 ? "YES" : "NO") ;
    return 0;
}