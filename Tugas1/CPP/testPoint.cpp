#include <iostream>
#include "Point.h"
using namespace std;

int main(){
    // Test konstruktor dan toString
    /* konstruktor */
    Point p1(1,2);
    /* string */
    cout << p1.toString() << endl;
    /* konstruktor default */
    Point p2;
    cout << p2.toString() << endl;

    // Test setter/getter
    /* setter */
    p1.setelX(3);
    p1.setelY(4);
    cout << p1.toString() << endl;
    /* getter */
    cout << "X adalah : " << p1.ambilX() << endl;
    cout << "Y adalah : " << p1.ambilY() << endl;

    // Test setXY dan getXY
    /* setXY */
    p1.setelXY(5,6);
    cout << p1.toString() << endl;
    cout << "X adalah : " << p1.ambilXY()[0] << endl;
    cout << "Y adalah : " << p1.ambilXY()[1] << endl;

    // Test ketiga versi distance
    p2.setelXY(10,11);
    cout << "Jarak adalah : " << p1.jarak(10,11) << endl;
    cout << "Jarak adalah : " << p1.jarak(p2) << endl;
    cout << "Jarak adalah : " << p2.jarak(p1) << endl;
    cout << "Jarak adalah : " << p1.jarak() << endl;

    return 0;
}