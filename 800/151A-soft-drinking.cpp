#include<iostream>
#include<algorithm>
using namespace std;

auto main() -> int {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cout <<
        min({(k*l)/nl, c*d, p/np})/n << "\n";
    return 0;
}