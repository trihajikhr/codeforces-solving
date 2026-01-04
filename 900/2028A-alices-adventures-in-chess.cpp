#include<iostream>
using namespace std;

void solve() {
    int n,a,b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    pair<int, int> cur {0,0};
    for (int i=0; i <= 100; i++) {
        for (char & c : s){
            switch (c) {
                case 'N':
                    cur.second++;break;
                case 'E':
                    cur.first++; break;
                case 'S':
                    cur.second--; break;
                case 'W':
                    cur.first--; break;
                default:
                    cerr << "Error";
            }

            if (cur.first == a && cur.second == b) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}