#include<iostream>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int odd = 0, even = 0;
        for (int i=0, x; i < n; i++) {
            cin >> x;
            if (i%2==1 && x%2==0) odd++;
            else if (i%2==0 && x%2==1) even++;
        }

        cout << (even == odd ? even : -1) << "\n";
    }
    return 0;
}