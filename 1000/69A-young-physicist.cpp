#include<iostream>
#include<array>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);;
    cin.tie(nullptr);
    int t;
    cin >> t;
    array<int, 3> arr{0,0,0};
    while (t--) {
        for (int i=0, x; i<3; i++) {
            cin >> x;
            arr[i] += x;
        }
    }

    if ((arr[0] == arr[1]) && (arr[2] == 0) && (arr[0] == arr[2])) {
        cout << "YES";
    } else cout << "NO";

    return 0;
}
