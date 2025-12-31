#include<iostream>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    int b = n % 4;
    if (n==0) {
        cout << 1;
        return 0;
    }
    if (b==1) cout << 8;
    else if (b==2) cout << 4;
    else if (b==3) cout << 2;
    else if (b==0) cout << 6;
    return 0;
}