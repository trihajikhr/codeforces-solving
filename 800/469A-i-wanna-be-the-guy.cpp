#include<iostream>
#include<set>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    set<int> daset;

    int a; cin >> a;
    for (int i=0, x; i<a; i++) {
        cin >> x;
        daset.insert(x);
    }

    cin >> a;
    for (int i=0, x; i<a; i++) {
        cin >> x;
        daset.insert(x);
    }

    cout << (daset.size() == n ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}