#include<iostream>
using namespace std;

auto main() -> int {
    int n, m;
    cin >> n >> m;
    if (n < m) cout << -1;
    else {
        int a = (n+1)/2;
        for (int i=a; i<= a+10; i++) {
            if (i % m == 0) {
                cout << i;
                return 0;
            }
        }
    }
    return 0;
}