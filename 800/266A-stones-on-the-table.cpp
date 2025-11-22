#include<iostream>
#include<cctype>
using namespace std;

auto main() -> int {
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i=0; i<n-1; i++) {
        if (s[i] == s[i+1]) cnt++;
    }
    cout << cnt;
    return 0;
}