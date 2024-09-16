#include <iostream>
using namespace std;
int main() {
     int no1, no2, no3;

    // Meminta pengguna memasukkan tiga angka
    cout << "Masukkan angka pertama: ";
    cin >> no1;
    cout << "Masukkan angka kedua: ";
    cin >> no2;
    cout << "Masukkan angka ketiga: ";
    cin >> no3;

    // Menentukan angka terbesar menggunakan operator ternary
    int terbesar = (no1 > no2) ? ((no1 > no3) ? no1 : no3) : ((no2 > no3) ? no2 : no3);

    // Mencetak angka terbesar
    cout << "Angka terbesar adalah: " << terbesar << endl;
    return 0;
}