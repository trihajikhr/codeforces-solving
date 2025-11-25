#include<iostream>
#include<string>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = to_string(n);
        int ans = 0;
        ans += ((s[0] - '0') * 10) - 10;
        int t = s.length();
        int y = 0;
        if (t==1) ans += 1;
        else if (t == 2) ans += 3;
        else if (t == 3) ans += 6;
        else if (t == 4) ans += 10;
        cout << ans << "\n";
    }
    return 0;
}