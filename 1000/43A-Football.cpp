#include<iostream>
using namespace std;

auto main() -> int {
    int n, cnt1 = 0, cnt2 = 0;
    cin >> n;

    string s, a, b;
    for (int i=0; i<n; i++) {
        cin >> s;
        if (i == 0) a = s, cnt1++;
        else {
            if (s == a) cnt1++;
            else b = s, cnt2++;
        }
    }

    cout << (cnt1 > cnt2 ? a : b);
    return 0;
}