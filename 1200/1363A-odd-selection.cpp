#include <iostream>
using namespace std;

auto main() -> int {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        long long int n, i, o = 0, e = 0, x, f = 0, k, c = 0;
        cin >> n >> k;
        for (i = 0; i < n; i++) {
            cin >> x;
            if (x & 1)
                o++;
            else
                e++;
        }
        if (o > 0) {
            if (o % 2 == 0)
                o--;
            if (e > 0)
                c = 1;
            e += o;
            if (k & 1 && e >= k)
                f = 1;
            else if (k % 2 == 0 && c && e >= k)
                f = 1;
        }
        if (f)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }

    return 0;
}