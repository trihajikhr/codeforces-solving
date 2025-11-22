#include<iostream>
#include<cctype>
using namespace std;

auto main() -> int {
    int k,n,w;
    cin >> k >> n >> w;
    int sum = 0;
    for (int i=1; i<=w; i++) {
        sum += i*k;
    }

    cout << (sum <= n ? 0 : sum - n);
    return 0;
}