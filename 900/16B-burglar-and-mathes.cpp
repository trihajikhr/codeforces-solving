#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

using ll = long long;

auto main() -> int {
    ll n, m, sum = 0;
    cin >> n >> m;
    vector<pair<ll, ll>> vec(m);
    for (auto& [a, b] : vec) {
        cin >> a >> b;
    }

    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    for (const auto& [a, b] : vec) {
        if (a <= n) {
            sum += a * b;
            n -= a;
        } else {
            sum += n * b;
            n = 0;
        }
        if (n==0) break;
    }
    cout << sum << "\n";
    return 0;
}