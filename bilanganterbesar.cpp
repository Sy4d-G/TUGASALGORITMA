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

    // Menentukan angka terbesar
    int terbesar = no1;
    if (no2 > terbesar) {
        terbesar = no2;
    }
    if (no3 > terbesar) {
        terbesar = no3;
    }

    // Mencetak angka terbesar
    cout << "Angka terbesar adalah: " << terbesar << endl;
}