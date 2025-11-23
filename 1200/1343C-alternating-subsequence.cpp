#include<iostream>
#include<vector>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto& x : v) cin >> x;
    ll sum = 0, maks = INT_MIN, i =0;
    bool pass = v[0] > 0;
    while (i < n) {
        if (pass && i < n) {
            while (v[i] > 0 && i < n) maks = max(maks, v[i]), i++;
            sum += (maks == INT_MIN ? 0 : maks);
            pass = false;
            maks = INT_MIN;
        } else if (!pass && i < n) {
            while (v[i] < 0 && i < n) maks = max(maks, v[i]), i++;
            sum += (maks == INT_MIN ? 0 : maks);
            pass = true;
            maks = INT_MIN;
        }
    }
    cout << sum << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}