#include<iostream>
#include<vector>
using namespace std;

void solve() {
    int n, m = 1;
    cin >> n;
    vector<int> num;

    while (n > 0) {
        if (n % 10 != 0) num.push_back((n % 10) * m);
        n/=10, m *= 10;
    }
    cout << num.size() << "\n";
    for (const auto& x : num) cout << x << " ";
    cout << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}