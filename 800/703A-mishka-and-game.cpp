#include<iostream>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int m = 0, c= 0;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a > b) m++;
        else if (a < b) c++;
        else m++, c++;
    }

    if (m == c) {
        cout << "Friendship is magic!^^";
    } else if (m > c) {
        cout << "Mishka";
    } else if (m < c) {
        cout << "Chris";
    }
    return 0;
}