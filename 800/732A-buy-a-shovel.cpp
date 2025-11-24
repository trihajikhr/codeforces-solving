#include<iostream>
using namespace std;

auto main() -> int {
    int n, k;
    cin >> n >> k;

    if ((n % 10 == 0) || (n % 10 == k)) cout << 1;
    else {
        for (int i=1; i<=10; i++) {
            if ((n * i) % 10 == 0 || (n * i) % 10 == k) {
                cout << i;
                return 0;
            }
        }
    }
    return 0;
}