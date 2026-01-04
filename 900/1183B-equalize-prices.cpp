#include<iostream>
#include<climits>
using namespace std;

void solve() {
    int n, k, mins = INT_MAX, maks = INT_MIN;
    cin >> n >> k;
    for (int i=0, x; i<n; i++) {
        cin >> x;
        mins = min(mins, x);
        maks = max(maks, x);
    }

    if ((mins + k) >= (maks - k)) cout << mins + k << "\n";
    else cout << "-1\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}