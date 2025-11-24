#include<iostream>
#include<vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> data;

    int cur = 1, ans = 0;
    while (n > 0) {
        int temp = n % 10;
        n /= 10;

        if (temp) {
            data.push_back(temp * cur);
            ans++;
        }
        if (cur==1) cur = 10;
        else cur *= 10;
    }
    cout << ans << "\n";
    for (const auto& x : data) {
        cout << x << " ";
    }
    cout << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}