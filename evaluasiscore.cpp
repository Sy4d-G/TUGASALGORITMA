#include <iostream>
using namespace std;

int main (){
    int score;
    cout << "==Evaluasi Score Nilai Mahasiswa==" << endl;
    cout << "Silahkan input nilai anda = " << endl; cin >> score;
    if (score > 90) {
        cout << "Selamat anda mendapatkan nilai A" << endl;
    }
    else if (score >= 80 && score <= 89) {
        cout << "Anda mendapatkan nilai B" << endl;
    }
    else if (score >= 70 && score <= 79) {
        cout << "Anda mendapatkan nilai C" << endl;
    }
    else if (score >= 60 && score <= 69) {
        cout << "Anda mendapatkan nilai D" << endl;
    }
    else if (score <= 60 ) {
        cout << "Anda mendapatkan nilai E" << endl;
    }
return 0;
}