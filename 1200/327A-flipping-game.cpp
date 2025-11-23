#include<bits/stdc++.h>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    int a[n], temp, curr = 0, summ = 0, mx = -n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        curr += 1 - 2 * temp;
        summ += temp;
        mx = max(mx, curr);
        if (curr < 0) curr = 0;
    }
    cout << mx + summ;
    return 0;
}