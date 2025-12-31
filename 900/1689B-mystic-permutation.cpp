#include<iostream>
#include<set>
#include <vector>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n), rest(n);
    for (auto& x : vec) cin >> x;
    set<int> daset {vec.begin(), vec.end()};

    if (n==1) {
        cout << -1 << "\n";
        return;
    }

    for (int i=0; i<n; i++) {
        auto temp = daset.begin();
        if (*temp != vec[i]) {
            rest[i] = *temp;
        } else {
            if (i == n-1) {
                rest[i] = *temp;
                swap(rest[n-1], rest[n-2]);
            } else {
                advance(temp,1);
                rest[i] = *temp;
            }
        }
        daset.erase(temp);
    }

    for (const auto& x : rest) {
        cout << x << " ";
    }

    cout << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}