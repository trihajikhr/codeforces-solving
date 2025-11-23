#include<iostream>
#include<iomanip>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    double sum = 0.0, x;
    for (int i=0; i<n; i++) {
        cin >> x;
        sum += x;
    }

    cout << fixed << setprecision(10) << sum / static_cast<double>(n);
    return 0;
}