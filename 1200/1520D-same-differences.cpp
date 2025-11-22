#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

using ll = long long;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        unordered_map<ll, ll> dasmap;
        ll n;
        cin >> n;
        for (int i=1; i<=n; i++) {
            ll x;
            cin >> x;
            dasmap[x-i]++;
        }

        ll cnt = 0;
        for (const auto& [key, val] : dasmap) {
            cnt += ((val - 1) * val) / 2;
        }
        cout << cnt << "\n";
    }
    return 0;
}