#include<iostream>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if (a % b == 0) {
        cout << 0 << "\n";
    } else if (a < b) {
        cout << b-a << "\n";
    } else {
        cout << b-(a % b) << "\n";
    }
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}