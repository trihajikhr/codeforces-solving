#include<iostream>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;
        cout << n-((n-y) % x) << "\n";
    }
    return 0;
}