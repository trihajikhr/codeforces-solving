#include<iostream>
using namespace std;

auto main() -> int {
    int x,y,z, n = 0;
    x = y = z = n;
    cin >> n;

    for (int i=0,a,b,c; i<n; i++) {
        cin >> a >> b >> c;
        x += a, y += b, z +=c;
    }

    if (x || y || z) cout << "NO";
    else cout << "YES";
    return 0;
}