#include<iostream>
using namespace std;

using ll = long long;

auto main() -> int {
    ll n, k;
    cin >> n >> k;

    if (n%2 == 0) {
        cout << (k <= (n/2) ? (k*2)-1 : (k-(n/2))*2);
    } else {
        cout << (k <= (n+1)/2 ? (k*2)-1 : (k-((n+1)/2))*2);
    }
    return 0;
}