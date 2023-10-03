#include <iostream>
#include "Time.h"
using namespace std;

int main(){
    // Test konstruktor dan toString
    /* Konstruktor */
    Time t1(1,2,3);
    /* String */
    cout << t1.toString() << endl;
    /* Konstruktor default */
    Time t2;
    cout << t2.toString() << endl;

    // Test setter/getter
    /* setter */
    t1.setelJam(4);
    t1.setelMenit(5);
    t1.setelDetik(6);
    /* memeriksa instance yang sudah dimodifikasi */
    cout << t1.toString() << endl;
    /* getter */
    cout << "Jam : " << t1.ambilJam() << endl;
    cout << "Menit : " << t1.ambilMenit() << endl;
    cout << "Detik : " << t1.ambilDetik() << endl;

    // Test setTime
    t1.setelWaktu(58,59,23);
    cout << t1.toString() << endl;

    // Test detikSelanjutnya dan rangkaian
    /* mengembalikan waktu */
    cout << t1.detikSelanjutnya().toString() << endl;
    /* rangkaian */
    cout << t1.detikSelanjutnya().detikSelanjutnya().detikSelanjutnya().toString() << endl;

    return 0;
}