#include<iostream>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int temp = 0, cur = 0;
    for (char& c : s) {
        if (c == '(') temp++;
        else {
            if (temp > 0) temp--;
            else cur++;
        }
    }
    cout << cur << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}