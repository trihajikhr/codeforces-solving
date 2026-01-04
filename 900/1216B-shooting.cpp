#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i=0, x; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }

    ranges::sort(v, [](const auto& a, const auto& b) {
        if (a.first == b.first) return a.second < b.second;
        return a.first > b.first;
    });

    int sum = 0, cnt = 0;
    for (int i=0; i<n; i++) {
        sum += v[i].first * cnt +1;
        cnt++;
    }

    cout << sum << "\n";
    for (const auto& x : v) {
        cout << x.second+1 << " ";
    }
    return 0;
}