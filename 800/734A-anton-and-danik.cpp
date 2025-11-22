#include<iostream>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a=0, d=0;
    for (char & c : s) {
        if (c=='A') a++;
        else d++;
    }

    cout << (a == d ? "Friendship" : a < d ? "Danik" : "Anton");
    return 0;
}