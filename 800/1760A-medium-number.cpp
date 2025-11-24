#include<bits/stdc++.h>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    string s = "codeforces";
    while (t--) {
        array<int, 3> arr{};
        for (auto& x : arr) cin >> x;
        ranges::sort(arr);
        cout << arr[1] << "\n";
    }
    return 0;
}