#include<algorithm>
#include<iostream>
using namespace std;

auto main() -> int {
    int n, m;
    cin >> n >> m;

    cout << min(n, m) << " " << (max(n,m) - min(n,m)) / 2 ;
    return 0;
}