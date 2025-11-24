#include<iostream>
#include<algorithm>
#include<array>
using namespace std;

auto main() -> int {
    array<int, 3> arr{};
    for (auto& x : arr) cin >> x;
    ranges::sort(arr);
    cout << (arr[2]-arr[1]) + (arr[1]-arr[0]);
    return 0;
}