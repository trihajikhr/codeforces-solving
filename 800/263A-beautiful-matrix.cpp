#include<iostream>
using namespace std;

auto main() -> int {
    int x, y, c;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> c;
            if (c) {
                x = i, y = j;
            }
        }
    }

    cout << abs(x-2) + abs(y-2) << "\n";
    return 0;
}