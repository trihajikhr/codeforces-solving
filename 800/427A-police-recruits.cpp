#include<iostream>
using namespace std;

auto main() -> int {
    int n, cur = 0, ans = 0;
    cin >> n;
    for (int i=0, x; i<n; i++) {
        cin >> x;
        if (x > 0) cur += x;
        else {
            if (cur > 0) cur--;
            else ans++;
        }
    }
    cout << ans;
    return 0;
}