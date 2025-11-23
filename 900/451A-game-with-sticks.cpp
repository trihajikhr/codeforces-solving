#include<iostream>
using namespace std;

auto main() -> int {
    int n, m;
    cin >> n >> m;
    cout << (min(n,m)%2 ? "Akshat" : "Malvika" ) << "\n";
    return 0;
}