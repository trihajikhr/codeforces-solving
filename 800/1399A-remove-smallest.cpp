#include<bits/stdc++.h>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& x : v) cin >> x;
        ranges::sort(v);
        bool pass = true;
        for (int i=0; i<n-1; i++) {
            if (v[i+1]-v[i] > 1) {
                pass = false;
                break;
            }
        }

        cout << (pass ? "YES" : "NO") << '\n';
    }
    return 0;
}