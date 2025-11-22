#include<iostream>
#include<cctype>
#include<algorithm>
#include<string>
using namespace std;

auto main() -> int {
    string a,b;
    cin >>a  >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if (a==b) cout << 0;
    else if (a<b) cout << -1;
    else cout << 1;
    return 0;
}