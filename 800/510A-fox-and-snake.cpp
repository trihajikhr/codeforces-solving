#include<iostream>
using namespace std;

auto main() -> int {
    int n, m;
    cin >> n >> m;

    bool right = false;
    for (int i=1; i <= n; i++) {
        if (i%2) right = !right;
        for (int j=1; j <= m; j++) {
            cout << (i%2 ? "#" : right ? j==m ? "#" : "." : j==1 ? "#" : ".");
        }
        cout << "\n";
    }
    return 0;
}