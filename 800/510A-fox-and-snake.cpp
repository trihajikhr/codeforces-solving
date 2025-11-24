#include<iostream>
using namespace std;

auto main() -> int {
    int n, m;
    cin >> n >> m;

    bool pass = 1;
    for (int i=1; i<= n; i++) {
        for (int j=1; j<= m; j++) {
            cout << (i % 2 ? "#" : pass ? j==m ? "#" : "." : j==1 ? "#" : ".");
        }
        if (i%2==0) {
            pass ^= 1;
        }
        cout << "\n";
    }
    return 0;
}