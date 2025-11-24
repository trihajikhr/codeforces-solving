#include<iostream>
#include<vector>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;
    int l = 0, r = n-1;

    int s = 0, d = 0;
    bool pass = true;
    while (l <= r) {
        if (pass) {
            pass = false;
            s += v[l] >= v[r] ? v[l++] : v[r--];
        } else {
            pass = true;
            d += v[l] >= v[r] ? v[l++] : v[r--];
        }
    }
    cout << s << " " << d;
    return 0;
}