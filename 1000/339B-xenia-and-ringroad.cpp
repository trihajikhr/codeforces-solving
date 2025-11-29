#include<iostream>
using namespace std;

using ll = long long;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, ans = 0;
    cin >> n >> m;

    ll curr, prev = -1;
    for (int i=0; i<m; i++) {
        cin >> curr;
        if (i != 0) {
            if (curr < prev) ans += n;
        }
        prev = curr;
    }

    ans += prev - 1;
    cout << ans ;
    return 0;
}