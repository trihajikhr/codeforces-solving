#include<iostream>
using namespace std;

auto main() -> int {
    int n, k;
    cin >> n >> k;

    int time = 240 - k, ans = 0, temp = 1;
    while (time > 0 && n--) {
        time -= 5 * temp++;
        if (time >= 0) ans++;
    }

    cout << ans;
    return 0;
}