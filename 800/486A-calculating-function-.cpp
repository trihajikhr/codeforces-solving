#include<iostream>
using namespace std;

auto main() -> int {
    long long n;
    cin >> n;
    cout << (n % 2 ? -1 * ((n+1)/2) : n/2);
    return 0;
}