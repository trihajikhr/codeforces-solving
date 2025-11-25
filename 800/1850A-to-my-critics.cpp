#include<iostream>
#include<vector>
using namespace std;

constexpr int SZ = 1001;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a,b ,c;
        cin >> a >> b >> c;
        if ((a+b >= 10) || (a+c >= 10) || (b+c >= 10)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}