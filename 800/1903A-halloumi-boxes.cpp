#include<iostream>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    bool pass = true;
    int cur = -1, prev = -1;
    for (int i=0; i<n; i++) {
        cin >> cur;
        if (prev != -1) {
            if (cur < prev) pass = false;
        }
        prev = cur;
    }

    if (k != 1) cout << "YES\n";
    else {
        if (pass) cout << "YES\n";
        else cout << "NO\n";
    }
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}