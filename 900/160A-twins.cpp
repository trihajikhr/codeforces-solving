#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

auto main() -> int {
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (auto& x : v) {
        cin >> x;
        sum += x;
    }
    ranges::sort(v, greater<>());

    int cnt = 0, cur = 0;
    for (const auto& x : v) {
        cnt++;
        cur += x, sum -= x;
        if (cur > sum) break;
    }

    cout << cnt;
    return 0;
}