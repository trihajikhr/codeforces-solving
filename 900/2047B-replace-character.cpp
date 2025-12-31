#include<iostream>
#include <unordered_map>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    unordered_map<char, int> dasmap;
    for (char& c : s) dasmap[c]++;
    pair<char, int> mins, maks;
    mins.second = INT_MAX, maks.second = INT_MIN;

    for (const auto& [key, val] : dasmap) {
        if (val < mins.second) {
            mins.second = val;
            mins.first = key;
        }

        if (val >= maks.second) {
            maks.second = val;
            maks.first = key;
        }
    }

    if (dasmap.size() == 1) {
        cout << s << "\n";
    } else {
        for (int i=0; i<s.length(); i++) {
            for (int j=0; j<s.length(); j++) {
                if (s[i]==mins.first && s[j]==maks.first) {
                    s[i] = s[j];
                    cout << s << "\n";
                    return;
                }
            }
        }
    }
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}