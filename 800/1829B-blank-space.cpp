#include<iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int ans = 0, cnt = 0;
    for (int i=0, x; i<n; i++) {
        cin >> x;
        if (!x) cnt++;
        else {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    cout << max(ans, cnt) << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}