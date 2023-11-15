#include <iostream>
#include <cmath>
using namespace std;

// Class Circle memodelkan lingkaran dengan radius dan warna.
class Circle
{
    // Konstanta public
public:
    const double DEFAULT_RADIUS = 1.0;
    const string DEFAULT_WARNA = "merah";

    // Variabel instance private
private:
    double radius;
    string warna;

    // constructor (overloaded)

    /* Membuat instance lingkaran dengan radius dan warna default */
    // Constructor 1 (Konstruktor default)
public:
    Circle()
    {
        this->radius = DEFAULT_RADIUS;
        this->warna = DEFAULT_WARNA;
    }

    /* Membuat instance lingkaran dengan radius tertentu dan warna default */
    // Constructor 2
public:
    Circle(double radius)
    {
        this->radius = radius;
        this->warna = DEFAULT_WARNA;
    }

    /* Membuat instance lingkaran dengan radius dan warna tertentu */
    // Constructor 3
public:
    Circle(double radius, string warna)
    {
        this->radius = radius;
        this->warna = warna;
    }

    /* Mengembalikan nilai radius - public getter untuk variabel private radius */
public:
    double ambilRadius()
    { // getter untuk radius
        return this->radius;
    }

    /* Menetapkan nilai radius - public setter untuk variabel private radius */
public:
    void setelRadius(double radius)
    {
        this->radius = radius;
    }

    /* Mengembalikan nilai warna - public getter untuk variabel private warna */
public:
    string ambilWarna()
    { // getter untuk warna
        return this->warna;
    }

    /* Menetapkan nilai warna - public setter untuk variabel private warna */
public:
    void setelWarna(string warna)
    {
        this->warna = warna;
    }

    /* Mengembalikan nilai deskripsi diri dalam string untuk instance lingkaran ini */
public:
    string toString()
    {
        return "Circle[radius = " + to_string(radius) + " ,Warna = " + warna + "]";
    }

    /* Mengembalikan nilai luas Lingkaran */
public:
    double hitungLuas()
    {
        return radius * radius * M_PI;
    }

    /* Mengembalikan nilai keliling Lingkaran */
public:
    double hitungKeliling()
    {
        return 2.0 * radius * M_PI;
    }
};