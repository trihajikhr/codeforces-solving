#include<iostream>
#include<unordered_map>
using namespace std;

/*
 * Jawaban yang mungkin hanyalah 0, 1, dan 2.
 * Jika jumlah angka nol terlalu sedikit atau pas untuk menjadi sekat dari setiap angka,
 * maka kita bisa merancang agar nilai MEX menjadi 0.
 *
 * Jika terdapat lebih banyak 0 untuk menjadi sekat dari setiap angka,
 * ini artinya nilai terkecil sudah ditempati oleh angka 0 itu sendiri.
 *
 * Artinya kemungkinan jawaban menyempit ke 1 dan 2.
 * Jika angka terkecil yang ada hanya 0 dan 1, maka jawaban yang mungkin hanyalah 2,
 * selain itu kita bisa mengurutkan array sedemikian rupa untuk menjadikan
 * jawaban menjadi 1.
 */

void solve() {
    int n;
    cin >> n;
    unordered_map<int, int> num;

    for (int i=0, x; i < n; i++) {
        cin >> x; num[x]++;
    }

    if ((n+1)/2 >= num[0]) cout << "0\n";
    else {
        if (num.size() == 2 && num[1] && num[0]) cout << "2\n";
        else cout << "1\n";
    }
}

auto main() -> int {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}