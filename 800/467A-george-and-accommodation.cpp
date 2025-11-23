#include<iostream>
using namespace std;

auto main() -> int {
    int n, sum = 0;
    cin >> n;
    for (int i=0,x, y; i<n; i++) {
        cin >> x >> y;
        sum += x < y && y - x >= 2 ? 1 : 0;
    }
    cout << sum;
    return 0;
}