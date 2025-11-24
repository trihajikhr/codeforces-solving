#include<iostream>
#include<vector>
using namespace std;

auto main() -> int {
    vector<int> vec(4);
    for (auto& x : vec) cin >> x;
    int n;
    cin >> n;

    int ans = 0;
    for (int i=1; i<=n; i++) {
        for (int j=0; j<4; j++) {
            if (i % vec[j]==0) {
                ans++;
                break;
            }
        }
    }

    cout << ans;
    return 0;
}