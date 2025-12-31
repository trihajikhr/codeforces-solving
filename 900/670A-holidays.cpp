#include<iostream>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    if (n%7==0) {
        cout << n/7*2 << " " << n/7*2;
    } else {
        int maks = (n/7*2) + (n%7==1 ? 1 : 2);
        int mins = (n/7*2) + (n%7==6);
        cout << mins << " " << maks;
    }
    return 0;
}