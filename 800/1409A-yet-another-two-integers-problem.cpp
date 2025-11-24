#include<bits/stdc++.h>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == b) cout << 0;
        else if (a < b) {
            cout << (b-a)/10 + ((b-a) % 10 ? 1 : 0);
        } else if (a > b) {
            cout << (a-b)/10 + ((a-b) % 10 ? 1 : 0);
        }
        cout << "\n";
    }
    return 0;
}