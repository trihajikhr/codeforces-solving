#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    if (n == 2 || n == 3) return true;
    for (int i=2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

auto main() -> int {
    int a, b;
    cin >> a >> b;

    if (!isPrime(a) || !isPrime(b)) {
        cout << "NO";
    } else {
        int temp = -1;
        for (int i=a+1; i<= b; i++) {
            if (isPrime(i)) {
                temp = i;
                break;
            }
        }
        cout << (temp == b ? "YES" : "NO");
    }

    return 0;
}