#include <iostream>
using namespace std;

auto main() -> int {
    int n, x; cin >> n >> x;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (x % i == 0 && x / i <= n) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}