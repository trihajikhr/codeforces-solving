#include<iostream>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    string a, b;
    int an = 0, bn=0;

    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        if (i==0) {
            an ++;
            a = s;
        } else {
            if(a==s) an++;
            else {
                b = s;
                bn++;
            }
        }
    }
    cout << (an > bn ? a : b);
    return 0;
}