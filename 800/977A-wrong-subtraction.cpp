#include<iostream>
using namespace std;

auto main() -> int {
    int n, k;
    cin >> n >> k;
    while (k--) n % 10 != 0 ? n-- : n/=10;
    cout << n;
    return 0;
}