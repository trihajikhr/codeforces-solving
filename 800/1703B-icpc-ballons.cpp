#include<iostream>
#include<set>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> daset;
    int ans = 0;
    for (char & c : s) {
        if (!daset.count(c)) {
            ans += 2;
            daset.insert(c);
        } else ans++;
    }
    cout << ans << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}