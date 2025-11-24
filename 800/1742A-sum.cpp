#include<iostream>
using namespace std;

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if ((a+b == c) || (a+c==b) || (b+c==a)) {
        cout << "YES\n";
    } else cout << "NO\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}