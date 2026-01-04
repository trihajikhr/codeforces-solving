#include<iostream>
#include<unordered_map>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    unordered_map<int, bool> dasmap;
    for (int i=0, in; i<n; i++) {
        cin >> in;
        dasmap[in] = true;
    }

    int cnt = 1, curr = 0;
    while (cnt <= x) {
        curr++;
        if (!dasmap[curr]) cnt++;
    }

    while (dasmap[curr + 1]) curr++;
    cout << curr << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}