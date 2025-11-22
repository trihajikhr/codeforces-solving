#include<iostream>
#include<cctype>
using namespace std;

auto main() -> int {
    int n, k;
    cin >> n >> k;
    while (k--) {
        if (n%10) n--;
        else n/=10;
    }
    cout << n;
    return 0;
}