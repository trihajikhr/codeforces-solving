#include<iostream>
#include<unordered_map>
using namespace std;

void getData(unordered_map<char, int>& dasmap, string s) {
    for (char c: s) {
        dasmap[c]++;
    }
}

auto main() -> int {
    string a,b ,c;
    cin >> a >> b >> c;
    unordered_map<char, int> dasmap;
    getData(dasmap,a);
    getData(dasmap,b);

    for (char & c : c) {
        dasmap[c]--;
    }

    for (const auto& x : dasmap) {
        if (x.second != 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}