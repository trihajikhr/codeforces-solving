#include<iostream>
#include<unordered_map>
using namespace std;

auto main() -> int {
    unordered_map<char, int> dasmap;
    string s;
    cin >> s;
    for (char& c : s) dasmap[c]++;
    cout << (dasmap.size() % 2 == 1 ? "IGNORE HIM!" : "CHAT WITH HER!");
    return 0;
}