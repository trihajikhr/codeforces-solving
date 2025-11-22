#include<iostream>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, sum = 0;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s=="++X" || s=="X++") sum++;
        else sum--;
    }
    cout << sum << "\n";
    return 0;
}