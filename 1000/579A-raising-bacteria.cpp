#include<iostream>
using namespace std;

auto main() -> int {
    int x;
    cin >> x;
    cout << __builtin_popcount(x);
    return 0;
}