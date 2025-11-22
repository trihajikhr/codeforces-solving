#include<iostream>
#include<cctype>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    cout << (n/5) + (n%5? 1 : 0);
    return 0;
}