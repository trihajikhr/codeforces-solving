#include<bits/stdc++.h>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if ((n-(2*(k-1)))%2==0 && (n-(2*(k-1))) > 0) {
            cout << "YES\n";
            for (int i=0; i<k-1; i++) cout << 2 << " ";
            cout << n-(2*(k-1)) << "\n";
        } else if ((n-(k-1)) % 2 == 1 && (n-(k-1)) > 0) {
            cout << "YES\n";
            for (int i=0; i<k-1; i++) cout << 1 << " ";
            cout << n-(k-1) << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}