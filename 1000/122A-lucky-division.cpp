#include<iostream>
#include<vector>
using namespace std;

void generate(vector<int>& rest, int cur) {
    if (cur > 1000) return;
    generate(rest, cur * 10 + 4);
    generate(rest, cur * 10 + 7);
    if (cur != 0) rest.push_back(cur);
}

auto main() -> int {
    vector<int> rest;
    generate(rest, 0);

    int n;
    cin >> n;
    for (const auto& x : rest) {
        if (n % x == 0) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}