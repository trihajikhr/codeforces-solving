#include<iostream>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    int ans = 0;

    int temp;
    ans += n/100;
    temp = ans;
    n -= 100*temp;

    temp = n/20;
    ans += temp;;
    n -= 20*temp;

    temp = n/10;
    ans += temp;
    n -= 10 * temp;

    temp = n/5;
    ans += temp;
    n -= 5 * temp;

    ans += n;
    cout << ans;
    return 0;
}