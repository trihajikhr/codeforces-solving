#include<iostream>
#include<unordered_map>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int f, n;
    cin >> f >> n;
    unordered_map<string, string> dasmap;
    dasmap.reserve(n);
    string a, b;
    while (n--) {
        cin >> a >> b;
        dasmap[a] = b;
    }

    while (f--) {
        cin >> a;
        cout << (a.length() <= dasmap[a].length() ? a : dasmap[a]) << " ";
    }
    return 0;
}