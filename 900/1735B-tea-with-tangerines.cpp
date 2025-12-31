#include<iostream>
#include<vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    int ans = 0;
    bool first = true;
    for (auto &i : a) {
        cin >> i;
        if (first) {
            first = !first;
            continue;
        }
        ans += (i - 1) / (2 * a[0] - 1);
    }
    cout << ans << '\n';
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}