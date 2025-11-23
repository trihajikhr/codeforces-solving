#include<iostream>
#include<vector>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i=1, x; i<=n; i++) {
        cin >> x;
        v[x] = i;
    }

    for (int i=1; i<=n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}