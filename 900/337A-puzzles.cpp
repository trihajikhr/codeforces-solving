#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

auto main() -> int {
    int k, n;
    cin >> k >> n;
    k--;
    vector<int> v(n);
    for (auto& x : v) cin >> x;
    ranges::sort(v);

    int ans = INT_MAX;
    for (int i=0; i<n-k; i++) {
        ans = min(ans, v[i+k]-v[i]);
    }
    cout << ans;
    return 0;
}