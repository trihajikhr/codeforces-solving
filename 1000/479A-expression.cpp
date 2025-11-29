#include<iostream>
#include<algorithm>
using namespace std;

auto main() -> int {
    int x, y, z;
    cin >> x >> y >> z;

    int ans = x + y + z;
    ans = max(ans, x * y * z);
    ans = max(ans, (x+y) * z);
    ans = max(ans, x * (y+z));
    cout << ans;
    return 0;
}