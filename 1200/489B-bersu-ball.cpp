#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int b;
    cin >> b;
    vector<int> boy(b);
    for (auto& x : boy) cin >> x;
    int g;
    cin >> g;
    vector<int> girl(g);
    for (auto& x : girl) cin >> x;
    ranges::sort(boy);
    ranges::sort(girl);
    int ans = 0;

    for (int i=0; i<b; i++) {
        for (int j=0; j<g; j++) {
            if (abs(boy[i]-girl[j]) <= 1) {
                ans++, girl[j] = 1000;
                break;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}