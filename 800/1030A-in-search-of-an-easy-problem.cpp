#include<iostream>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    bool pass = false;
    for (int i=0, x; i<n; i++) {
        cin >> x;
        if (x) pass = true;
    }

    cout << (pass ? "HARD" : "EASY");
    return 0;
}