/*
 * Semua angka genap pasti jika dibagi 2 hasilnya genap,
 * kecuali angka 2.
 */

#include<iostream>
using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    cout << (n % 2 == 0 && n != 2 ? "YES" : "NO") << "\n";
    return 0;
}