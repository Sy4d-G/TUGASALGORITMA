#include <iostream>
using namespace std;
int main () {
    int totalBebek = 20;
    int jumlahTeman = 13;
    int bebekPerOrang;
    int sisaBebek;

    // Menghitung jumlah bebek per orang dan sisa bebek
    bebekPerOrang = totalBebek / jumlahTeman;
    sisaBebek = totalBebek % jumlahTeman;

    cout << "Pak Tatang harus memberikan " << bebekPerOrang << " ekor bebek kepada masing-masing temannya." << endl;
    cout << "Sisa bebek yang tidak terbagi adalah " << sisaBebek << " ekor." << endl;
return 0;
}