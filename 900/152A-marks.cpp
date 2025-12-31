#include<iostream>
#include<vector>
using namespace std;

auto main() -> int {
    int n, m;
    cin >> n >> m;
    vector<pair<bool, string>> grade(n);
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        grade[i] = {false, s};;
    }

    int ans = 0;
    for (int i=0; i<m; i++) {
        int maks = INT_MIN;
        for (int j=0; j<n; j++) {
            maks = max(maks, grade[j].second[i] - '0');
        }

        for (int j=0; j<n; j++) {
            if (grade[j].second[i] -'0' == maks) {
                if (!grade[j].first) {
                    grade[j].first = true;
                    ans++;
                }
            }
        }
    }

    cout << ans;
    return 0;
}