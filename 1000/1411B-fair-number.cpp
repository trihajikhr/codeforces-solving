#include<bits/stdc++.h>
using namespace std;

// LCM(1..9) = 2520, safe from overflow in loop!

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n, k, a;
    cin >> t;
    while (t--) {
        cin >> n;
        k = n;
        while (k > 0) {
            a = k % 10;
            k = k / 10;
            if (a > 0 && n % a != 0) {
                n++;
                k = n;
            }
        }
        cout << n << "\n";
    }
}