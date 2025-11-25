#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (auto& x : vec) cin >> x;
    ranges::sort(vec);
    auto idx = ranges::find(vec, k);
    if (idx == vec.end()) cout << "NO\n";
    else cout << "YES\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}