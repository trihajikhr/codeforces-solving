#include<iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << "Division ";
    if (n <= 1399) cout << "4\n";
    else if (n <= 1599) cout << "3\n";
    else if (n <= 1899) cout << "2\n";
    else if (n >= 1900) cout << "1\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}