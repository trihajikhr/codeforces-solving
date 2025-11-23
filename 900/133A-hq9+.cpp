#include<iostream>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;
    for (char& c : s) {
        if (c=='H' || c=='9' || c=='Q') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}