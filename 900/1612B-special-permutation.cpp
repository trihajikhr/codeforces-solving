#include<iostream>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if (((a <= n/2) && (b > n/2)) || ((a == n/2+1) && (b== n/2))) {
            cout << a << " ";
            for (int i=n; i >= 1; i--) {
                if (i!= a && i!=b) cout << i << " ";
            }
            cout << b << "\n";
        } else cout << "-1\n";
    }
    return 0;
}