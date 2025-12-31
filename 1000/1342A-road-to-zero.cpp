#include<iostream>
using namespace std;

void solve() {
    long long a,b,x,y;
    cin >> x >> y;
    cin >> a >> b;

    long long sum = 0, temp;
    if (a+a <= b) {
        sum = a * (x+y);
    } else if (a+a > b) {
        temp = abs(x-y);
        sum = (min(x,y)*b) + (a * (temp));
    }

    cout << sum << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}