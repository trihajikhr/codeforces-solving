#include<iostream>
using namespace std;

auto main() -> int {
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int one = n*a;
    int mulp = ((n/m) * b) + min((n%m) * a, b);
    cout << min(one, mulp);
    return 0;
}