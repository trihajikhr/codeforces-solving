#include<iostream>
#include<climits>
#include<vector>
using namespace std;

auto main() -> int {
    int n;
    pair <int, int> maks = {INT_MIN, -1};
    pair <int, int> mins = {INT_MAX, -1};
    cin >> n;

    vector<int> v(n);
    for (auto& x:v) {
        cin >> x;
    }

    for (int i=0; i<n; i++) {
        if (v[i] > maks.first) {
            maks.first = v[i];
            maks.second = i;
        }

        if (v[n-i-1] < mins.first) {
            mins.first = v[n-i-1];
            mins.second = n-i-1;
        }
    }


    if (maks.second < mins.second) {
        cout << maks.second + ((n-1) - mins.second);
    } else {
        cout << maks.second + ((n-2) - mins.second);
    }

    return 0;
}