#include<iostream>
#include<unordered_map>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> server;
    for (int i=0; i<n; i++) {
        string a, b;
        cin >> a >> b;
        server[b] = a;
    }

    for (int i=0; i<m; i++) {
        string a, b;
        cin >> a >> b;
        b.pop_back();
        cout << a << " " << b << "; #" << server[b] << "\n";
    }
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}