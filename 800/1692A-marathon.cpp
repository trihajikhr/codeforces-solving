#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    vector<int> d(4);
    int tar = -1;
    for (auto& x : d) {
        cin >> x;
        if (tar == -1) tar = x;
    }

    ranges::sort(d);

    cout << 3 - (ranges::lower_bound(d, tar) - d.begin()) << "\n";

}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}