#include<iostream>
using namespace std;

#define debug(x) cerr << "value: " << x << "\n"

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    if (x < 0) x *= -1;
    if (y < 0) y *= -1;

    string s;
    cin >> s;
    if (x > n || y > n) {
        cout << "NO\n";
    } else {
        int now = n;
        for (char& c : s) {
            if(c=='4') now--;
        }

        int a = n, b = now;
        for (int i=now; i<=n; i++) {
            if (x <= a && y <= b) {
                cout << "YES\n";
                return;
            }
            a--, b++;
        }
        cout << "NO\n";
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