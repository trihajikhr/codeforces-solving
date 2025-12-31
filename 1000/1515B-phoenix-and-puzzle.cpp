#include <cmath>
#include<iostream>
using namespace std;

auto main() -> int {
    int n, t, i;
    cin >> t;
    while (t--) {
        cin >> n;
        int a = sqrt(n/2);
        int b = sqrt(n/4);
        cout << (a*a*2==n || b*b*4==n ? "YES" : "NO") << "\n";
    }
    return 0;
}