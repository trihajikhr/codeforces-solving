#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;
    ranges::sort(v);
    for (const auto& x : v) {
        cout << x << " ";
    }
    return 0;
}