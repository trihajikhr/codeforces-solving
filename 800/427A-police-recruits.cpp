#include<iostream>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    int ans = 0, cur=0;
    for (int i=0, x; i<n; i++) {
        cin >> x;
        if (cur == 0 && x == -1) {
            ans++;
        } else {
            cur += x;
        }
    }
    cout << ans;
    return 0;
}