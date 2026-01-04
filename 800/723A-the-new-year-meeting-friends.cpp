#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

auto main() -> int {
    array<int, 3> a;
    for (auto& x : a) cin >> x;
    ranges::sort(a);
    cout << (a[2] - a[1]) + (a[1] - a[0]);
    return 0;
}