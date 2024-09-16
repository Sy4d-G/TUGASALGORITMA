#include <iostream>
using namespace std;
int main () { int pilihan;
    float panjang, lebar, alas, tinggi, sisi, luas;

    cout << "Pilih bentuk untuk menghitung luas:\n" ;
    cout << "1. Persegi\n" ;
    cout << "2. Persegi Panjang\n" ;
    cout << "3. Segitiga\n" ;
    cout << "Masukkan pilihan (1/2/3): " ;
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan panjang sisi persegi: " ;
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi: " << luas << endl;
            break;
        case 2:
            cout << "Masukkan panjang: " ;
            cin >> panjang;
            cout << "Masukkan lebar: " ;
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang: " << luas << endl;
            break;
        case 3:
            cout << "Masukkan alas: ";
            cin >> alas;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga: " << luas << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }
return 0;
}