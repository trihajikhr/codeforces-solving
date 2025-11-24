#include<iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << (n <= 2 ? 0 : n%2 ? n/2 : (n/2)-1) << '\n';
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}