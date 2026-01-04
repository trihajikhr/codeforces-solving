#include<iostream>
#include<vector>
using namespace std;

using ll = long long;
auto main() -> int {
    ll n, m;
    cin >> n >> m;
    vector<ll> v(m);
    for (auto& x : v) cin >> x;

    ll ans = 0;
    for (int i=0; i<m-1; i++) {
        if (v[i+1] < v[i]) ans += n;
    }

    cout << ans + v.back() -1;
    return 0;
}