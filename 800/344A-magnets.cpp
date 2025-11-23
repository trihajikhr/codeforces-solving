#include<iostream>
using namespace std;

auto main() -> int {
    int n, sum = 1;
    cin >> n;
    int curr, prev = -1;
    for (int i=0, x; i <n; i++) {
        cin >> curr;
        if (prev != -1) {
            sum += prev != curr;
        }
        prev = curr;
    }
    cout << sum;
    return 0;
}