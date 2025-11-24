#include<iostream>
using namespace std;

auto main() -> int {
    string a, b;
    cin >> a >> b;
    for (int i=0; i<a.length(); i++) {
        if(a[i] != b[i]) b[i] = '1';
        else b[i] = '0';
    }
    cout << b;
    return 0;
}