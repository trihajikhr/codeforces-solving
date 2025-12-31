#include<iostream>
#include<utility>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        int a1,b1,a2,b2;
        cin >> a1 >> b1;
        cin >> a2 >> b2;

        if (a1 < b1) swap(a1, b1);
        if (a2 < b2) swap(a2, b2);
        if (b1 + b2 == a1 && a1 == a2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}