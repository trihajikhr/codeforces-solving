#include<iostream>
using namespace std;

auto main() -> int {
    int n, k, sum = 0;
    cin >> n >> k;
    for (int i=0, x; i<n; i++) {
        cin >> x;
        sum += x > k ? 2 : 1;
    }
    cout << sum;
    return 0;
}