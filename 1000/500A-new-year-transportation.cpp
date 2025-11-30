#include<iostream>
#include<vector>
using namespace std;

auto main() -> int {
    int n, t;
    cin >> n >> t;
    vector<int> v(n+1);
    for (int i=1; i<=n-1; i++) {
        cin >> v[i];
    }

    int cur = 1;
    while (cur < t) {
        cur += v[cur];
    }

    cout << (t == cur ? "YES" : "NO");
    return 0;
}