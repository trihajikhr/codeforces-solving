#include<iostream>
using namespace std;

auto main() -> int {
    long long n, m, s;
    cin >> n >> m >> s;
    cout << ((n+s-1)/s) * ((m+s-1)/s);
    return 0;
}