#include<iostream>
#include<cmath>
#include<algorithm>
#include <vector>
using namespace std;

#define debug(x) cerr << "value: "<< x << "\n";
using ll = long long;

void solve() {
    ll n, cnt = 0, sum = 0;
    cin >> n;
    vector<ll> vec(n);
    for (auto& x : vec) cin >> x;

    for (auto& x : vec) {
        while (x % 2 == 0) {
            x /= 2;
            cnt++;
        }
    }

    ranges::sort(vec);
    vec.back() *= pow(2, cnt);
    for (int i=0; i<n; i++) sum += vec[i];
    cout << sum << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve() ;
    return 0;
}