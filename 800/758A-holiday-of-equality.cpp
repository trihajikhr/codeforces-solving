#include<bits/stdc++.h>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    vector<int> v(n);
    int maks = INT_MIN;
    for (auto& x : v) {
        cin >> x;
        maks = max(maks, x);
    }

    int ans = 0;
    for (int i=0; i<n; i++) {
        ans += maks - v[i];
    }
    cout << ans;

    return 0;
}