#include<iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if ((n/2) % 2) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }

        for (int i = 1; i < n - 1; i += 2) {
            cout << i << " ";
        }

        cout << n + (n / 2) - 1 << '\n';
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