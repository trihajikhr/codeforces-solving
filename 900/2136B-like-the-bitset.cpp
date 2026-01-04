#include<iostream>
#include<vector>
using namespace std;


// kunci: jika ada karakter 1 berurutan sama\melebihi k, maka tidak mungkin memastikan bahwa
// s[i] yang bernilai 1 ditempati oleh karakter yang bukan maksimal dalam rentang
// l ke r!
void solve() {
    int n, k, cnt = 0;
    string s;
    bool impos = false;
    cin >> n >> k;
    cin >> s;

    vector<int> ans(n);
    for (char & c : s) {
        if (c == '1') {
            cnt++;
            if (cnt >= k) impos = true;
        } else cnt = 0;
    }

    if (impos) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    int curr = 1;
    for (int i=0; i<n; i++) if (s[i] == '1') ans[i] = curr++;
    for (int i=0; i<n; i++) if (s[i] == '0') ans[i] = curr++;
    for (const auto& x : ans) cout << x << " ";
    cout << "\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}