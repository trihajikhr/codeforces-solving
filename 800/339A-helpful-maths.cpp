#include<iostream>
#include<vector>
#include<cctype>
#include<algorithm>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;
    vector<char> num;
    for (char & c : s) {
        if (isdigit(c)) num.push_back(c);
    }

    ranges::sort(num);
    for (int i=0; i<num.size(); i++) {
        cout << num[i] << (i != num.size()-1 ? "+" : "");
    }
    return 0;
}