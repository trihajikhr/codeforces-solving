#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// misal elemen terbesar adalah |x|, maka jika elemen ini berada diposisi
// kurang dari n/2 setelah deret disorting, maka jawabanya adalah YES

void solve() {
    int n, temp;
    cin >> n;
    vector<int> data(n);
    for (int i=0, x; i<n; i++) {
        cin >> x;
        data[i] = abs(x);
    }

    temp = data.front();
    ranges::sort(data);

    temp = find(data.begin(), data.end(), temp) -  data.begin();
    cout << (temp <= n/2 ? "YES" : "NO") << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}