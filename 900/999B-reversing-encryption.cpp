#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> divs;
    for (int i=1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i != n/i) divs.push_back(n / i);
        }
    }

    ranges::sort(divs);

    for (int i=0; i<divs.size(); i++) {
        reverse(s.begin(), s.begin() + divs[i]);
    }

    cout << s;
    return 0;
}