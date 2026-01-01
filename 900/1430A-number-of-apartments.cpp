#include<iostream>
#include <vector>
using namespace std;

void print(const vector<int> & val) {
    for (const auto& x : val) {
        cout << x << " ";
    }
    cout << "\n";
}

void solve() {
    int n = 0;
    cin >> n;

    vector<int> num {3,5,7};
    vector<int> val {0,0,0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (n % num[j] == 0) {
                val[j] = n / num[j];
                print(val);
                return;
            }

            if ((n-num[i]) > 0 && (n-num[i]) % num[j] == 0) {
                val[i] = 1, val[j] = (n-num[i]) / num[j];
                print(val);
                return;
            }
        }
    }
    cout << -1 << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}