#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n) {
    if (n==1) return false;
    if (n == 2 || n == 3) return true;
    for (int i=2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

auto main() -> int {
    int n;
    cin >> n;

    int a = n/2;
    int b = (n+1)/2;
    while (isPrime(a) || isPrime(b)) a++, b--;
    cout << a << " " << b;
    return 0;
}