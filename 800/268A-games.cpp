#include<iostream>
#include<vector>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    vector<pair<int, int>> data(n);
    for (auto& [x, y]: data) {
        cin >> x >> y;
    }

    int ans = 0;
    for (int i = 0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (data[i].second == data[j].first) ans++;
        }
    }

    cout << ans;
    return 0;
}