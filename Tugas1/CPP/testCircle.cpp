#include <iostream>
#include "Circle.h"
using namespace std;

int main(){
    // Test semua konstruktor dan toString
    /* Radius dan warna tertentu */
    Circle c1(1.1,"biru");
    cout << c1.toString() << endl;

    /* Radius tertentu warna default */
    Circle c2(2.2);
    cout << c2.toString() << endl;

    /* Radius dan warna default */
    Circle c3;
    cout << c3.toString() << endl;

    // Test getter/setter
    /* test setter */
    c1.setelRadius(3.3);
    c1.setelWarna("hijau");
    /* menggunakan string untuk mengecek instance yang sudah dimodifikasi */
    cout << c1.toString() << endl;
    /* test getter */
    cout << "Radius : " << c1.ambilRadius() << endl;
    cout << "Warna : " << c1.ambilWarna() << endl;

    // Test Luas dan keliling
    /* Luas */
    cout << "Luas : " << c1.hitungLuas() << endl;
    /* Keliling */
    cout << "Keliling : " << c1.hitungKeliling() << endl;

    return 0;
}