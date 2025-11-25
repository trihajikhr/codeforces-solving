#include<iostream>
#include<vector>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    vector<vector<int>> dat(4);
    for (int i=1, x; i <= n; i++) {
        cin >> x;
        dat[x].push_back(i);
    }

    int mins = INT_MAX;
    for (int i=1; i <= 3; i++) {
        mins = min(mins, static_cast<int>(dat[i].size()));
    }

    cout << mins << "\n";
    for (int i=0; i < mins; i++) {
        for (int j=1; j <= 3; j++) {
            cout << dat[j][i] << " ";
        }
        cout << "\n";
    }
    return 0;
}