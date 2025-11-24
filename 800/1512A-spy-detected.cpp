#include<bits/stdc++.h>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& x : v) cin >> x;
        int temp = -1;

        if (v[0]==v[1]) temp = v[0];
        else if (v[1] == v[2]) temp = v[1];
        else if (v[0] == v[2]) temp = v[0];

        for (int i=0; i<n; i++) {
            if (v[i] != temp) {
                cout << i+1 << "\n";
                break;
            }
        }
    }
    return 0;
}