#include<iostream>
using namespace std;

auto main() -> int {
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int i=0, x; i<n; i++) {
        cin >> x;
        cnt += 5 - x >= k;
    }
    cout << cnt/3 << "\n";
    return 0;
}