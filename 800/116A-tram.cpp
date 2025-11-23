#include<iostream>
#include<algorithm>
using namespace std;

auto main() -> int {
    int sum = 0, n, x, y, maks = INT_MIN;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        sum += y - x;
        maks = max(maks, sum);
    }

    cout << maks;
    return 0;
}