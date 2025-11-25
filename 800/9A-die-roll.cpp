#include <iostream>
using namespace std;

auto main() -> int {
    int a = 0;
    int b = 0;
    cin >> a >> b;

    int m = (a >= b ? a : b);

    if (m == 6) {
        cout << "1/6";
    } else if (m == 5) {
        cout << "1/3";
    } else if (m == 4) {
        cout << "1/2";
    } else if (m == 3) {
        cout << "2/3";
    } else if (m == 2) {
        cout << "5/6";
    } else if (m == 1) {
        cout << "1/1";
    }
    return 0;
}