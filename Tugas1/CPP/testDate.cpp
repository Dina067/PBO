#include <iostream>
#include "Date.h"
using namespace std;

int main(){
    // Test konstruktor dan toString
    /* Konstruktor */
    Date d1(2020,2,8);
    /* String */
    cout << d1.toString() << endl;

    // Test getter/Setter
    /* setter */
    d1.setelTahun(2012);
    d1.setelBulan(12);
    d1.setelHari(23);
    /* mengecek instance yang sudah dimodifikasi */
    cout << d1.toString() << endl;
    /* getter */
    cout << "Tahun : " << d1.ambilTahun() << endl;
    cout << "Bulan : " << d1.ambilBulan() << endl;
    cout << " Hari : " << d1.ambilHari() << endl;

    // Test setDate
    d1.setDate(2988,1,2);
    cout << d1.toString() << endl;

    return 0;
}