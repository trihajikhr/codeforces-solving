#include<iostream>
#include<algorithm>
using namespace std;

auto main() -> int {
    int n, ans = 0, a, b;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        ans = max(ans, a+b);
    }
    cout << ans;
    return 0;
}