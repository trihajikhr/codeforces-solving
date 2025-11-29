#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, curr;
    cin >> curr >> t;

    vector<pair<int, int>> vec(t);
    for (auto& [x,y] : vec) {
        cin >> x >> y;
    }

    ranges::sort(vec);
    for (const auto& [x, y] : vec) {
        if (curr > x) curr += y;
        else {
            cout << "NO";
            return 0;
        }
    }


    cout << "YES";
    return 0;
}