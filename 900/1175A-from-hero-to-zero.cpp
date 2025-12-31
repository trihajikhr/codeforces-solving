#include<iostream>
using namespace std;

using ll = long long;

void solve() {
    ll n, m;
    cin >> n >> m;
    ll ans = 0;

    while (n > 0) {
        if (n >= m) {
            ll temp = 0;
            if (n % m) {
                temp = n % m;
            }
            ans += temp + 1;
            n /= m;
        } else if (n < m) {
            ans += n;
            n = 0;
        }
    }

    cout << ans << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}