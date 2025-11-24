#include<iostream>
#include<set>
using namespace std;

auto main() -> int {
    set<int> d;
    for (int i=0,x; i<4; i++) {
        cin >> x;
        d.insert(x);
    }

    cout << 4 - d.size();
    return 0;
}