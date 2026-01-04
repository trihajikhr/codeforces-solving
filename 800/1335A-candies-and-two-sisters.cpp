#include<iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    cout << (n-1) /2 << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}