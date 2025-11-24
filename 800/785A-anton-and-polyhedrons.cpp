#include<iostream>
#include<unordered_map>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;

    unordered_map<char, int> cube {
        {'T', 4},
        {'C', 6},
        {'O', 8},
        {'D', 12},
        {'I', 20}
    };

    int ans = 0;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        ans += cube[s[0]];
    }
    cout << ans ;
    return 0;
}