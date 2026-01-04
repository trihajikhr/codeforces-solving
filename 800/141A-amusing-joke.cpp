#include<iostream>
#include<unordered_map>
using namespace std;

auto main() -> int {
    string a, b, c;
    cin >> a >> b >> c;
    unordered_map<char,int> dasmap;
    for (char & x :a) dasmap[x]++;
    for (char & x :b) dasmap[x]++;
    for (char & x :c) dasmap[x]--;

    bool ans = true;
    for (const auto& x : dasmap) {
        if (x.second) {
            ans = false;
            break;
        }
    }

    cout << (ans ? "YES" : "NO");
    return 0;
}