#include<iostream>
#include<vector>
using namespace std;

constexpr int SZ = 1001;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<int> data(SZ);
    int idx = 1, cur = 1;
    while (idx <= SZ) {
        if (cur%3 && (cur%10 != 3)) {
            data[idx++] = cur;
        }
        cur++;
    }

    while (t--) {
        int n;
        cin >> n;
        cout << data[n] << "\n";
    }
    return 0;
}