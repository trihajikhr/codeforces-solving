#include<iostream>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, k, rest = 0;
        cin >> n >> k;
        rest = k + ((k-1)/(n-1));
        cout << rest << "\n";
    }
    return 0;
}
