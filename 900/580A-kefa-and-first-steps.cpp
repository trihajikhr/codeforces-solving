#include<iostream>
#include<vector>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    int cur = 1, prev = -1, cnt = 1, ans = 0;

    for (int i=0; i<n; i++) {
        cin >> cur;
        if (prev != -1) {
            if (cur >= prev) {
                cnt++;
            } else {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }

        prev = cur;
    }

    ans = max(ans, cnt);
    cout << ans ;
    return 0;
}