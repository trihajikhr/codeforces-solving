#include<iostream>
#include<vector>
using namespace std;

void precomp(int n, vector<int>& number) {
    if (n > 1000) return;
    if (n != 0) number.push_back(n);
    precomp(n * 10 + 7, number);
    precomp(n * 10 + 4, number);
}

auto main() -> int {
    vector<int> genNumber;
    precomp(0, genNumber);

    int n; cin >> n;
    for (int i=0; i<genNumber.size(); i++) {
        if (n % genNumber[i] == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}