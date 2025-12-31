#include<iostream>
#include<vector>
using namespace std;

void solve() {
    int n = 0;
    cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) cin >> x;

    int curr = 0;
    for (int i=n-1; i >= 0; i--) {
        if (vec[i] > 0 && vec[i] > curr) {
            curr = vec[i] - 1;
            vec[i] = 1;
        } else {
            if (curr > 0) {
                curr--;
                vec[i] = 1;
            } else {
                vec[i] = 0;
            }
        }
    }

    for (const auto& x : vec) {
        cout << x << " ";
    }
    cout << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}