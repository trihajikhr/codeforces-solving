#include<iostream>
#include<unordered_map>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    unordered_map<int, int> dasmap;
    dasmap.reserve(n);

    for (int i=0, x; i<n; i++) {
        cin >> x;
        dasmap[x]++;
    }

    int maks = INT_MIN;
    for (const auto& x : dasmap) {
        maks = max(maks, x.second);
    }

    cout << maks << " " << dasmap.size();
    return 0;
}