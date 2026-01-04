#include<iostream>
#include<vector>
using namespace std;

using ll = long long;
constexpr ll SZ = 1e5;
constexpr  ll MOD = 1e9 + 7;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> precomp(SZ+1);
    precomp[0] = 1;
    for (ll i = 1; i<= SZ; i++) {
        precomp[i] = precomp[i - 1] * i;
        precomp[i] %= MOD;
    }

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll sum = (n * (n-1)) % MOD;
        sum = (sum * precomp[n]) % MOD;
        cout << sum << "\n";
    }

    return 0;
}