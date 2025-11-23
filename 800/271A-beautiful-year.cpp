#include<iostream>
#include<set>
#include<string>
using namespace std;

bool differ(int& n) {
    string s = to_string(n);
    set<char> alfa;
    for (char& c: s) alfa.insert(c);
    if (alfa.size() != 4) {
        n = stoi(s);
        n++;
        return false;
    }
    return true;
}

auto main() -> int {
    int n;
    cin >> n;
    n++;

    while (!differ(n));

    cout << n;
    return 0;
}