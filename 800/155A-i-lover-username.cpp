#include<iostream>
#include<algorithm>
using namespace std;

auto main() -> int {
    int n, ans = 0;
    cin >> n;
    int maks = INT_MIN, mins = INT_MAX;
    for (int i=0, x; i<n; i++) {
        cin >> x;
        if (i==0) {
            maks = x, mins = x;
        } else {
            if (x > maks) {
                maks = x, ans++;
            }

            if (x < mins) {
                mins = x, ans++;
            }
        }
    }
    cout << ans;
    return 0;
}