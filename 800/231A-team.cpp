#include<iostream>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, sum = 0;
    cin >> t;
    while (t--) {
        int cnt = 0;
        for (int x, i=0; i<3; i++) {
            cin >> x;
            cnt += x;
        }
        sum += cnt >= 2 ? 1 : 0;
    }
    cout << sum << "\n";
    return 0;
}