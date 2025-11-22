#include<iostream>
#include<cctype>
using namespace std;

auto main() -> int {
    int a, b, cnt = 0;
    cin >> a >> b;
    while (a <= b) {
        a *= 3, b*= 2, cnt++;
    }
    cout << cnt;
    return 0;
}