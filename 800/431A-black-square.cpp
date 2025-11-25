#include<iostream>
#include<array>
using namespace std;

auto main() -> int {
    array<int, 5> arr{};
    for (int i=1; i<=4; i++) {
        cin >> arr[i];
    }

    string s;
    cin >> s;
    int ans = 0;
    for (int i=0; i<s.length(); i++) {
        ans += (arr[s[i] - '0']);
    }
    cout << ans;
    return 0;
}