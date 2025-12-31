#include<iostream>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        cout << (i%2 ? "I hate " : "I love ") << (i != n ? "that " : "it");
    }
    return 0;
}