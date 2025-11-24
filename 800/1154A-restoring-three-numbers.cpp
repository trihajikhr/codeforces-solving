#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

auto main() -> int {
    array<int, 4> a{};
    for (auto& x : a) cin >> x;
    ranges::sort(a);
    cout << a[3]-a[2] << " " << a[3]-a[1] << " " << a[3]-a[0];
    return 0;
}