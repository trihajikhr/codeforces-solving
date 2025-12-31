#include<iostream>
#include<unordered_map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_map<int,int> dasmap;
    for (int i=0, x; i<n; i++) {
        cin >> x;
        dasmap[x]++;
    }

    int cnt = 0, sum = 0;
    for (const auto& x : dasmap) {
        if (x.second == 1)  cnt++;
        else sum++;
    }

    cout << sum + 2 * ((cnt+1)/2) << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}