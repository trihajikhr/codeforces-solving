#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

using ll = long long;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> sto(n+1), ori (n+1), cheap (n+1);
    for (ll i=1; i <= n; i++) {
        cin >> sto[i];
        ori[i] = ori[i-1] + sto[i];
    }

    ranges::sort(sto);

    for (ll i=0; i <= n; i++) {
        cheap[i] = cheap[i-1] + sto[i];
    }

    int q;
    cin >> q;
    while (q--) {
        ll pil, l, r;
        cin >> pil >> l >> r;
        if (pil == 1) {
            cout << ori[r] - ori[l-1] << '\n';
        } else {
            cout << cheap[r] - cheap[l-1] << "\n";
        }
    }
    return 0;
}