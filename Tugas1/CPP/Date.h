#include <iostream>
using namespace std;

// Class Date memodelkan tanggal kalender dengan hari, bulan, dan tahun.
// Class ini tidak melakukan validasi input hari, bulan, dan tahun.
class Date
{
    // Variabel instance private
private:
    int tahun, bulan, hari;

    /* Membuat instance Tanggal dengan tahun, bulan, dan hari tertentu. Tidak ada validasi input. */
public:
    Date(int tahun, int bulan, int hari)
    {
        this->tahun = tahun;
        this->bulan = bulan;
        this->hari = hari;
    }

    // Public getter/setter untuk variabel private

    /* Mengembalikan nilai tahun */
public:
    int ambilTahun()
    {
        return this->tahun;
    }

    /* Mengembalikan nilai bulan */
public:
    int ambilBulan()
    {
        return this->bulan;
    }

    /* Mengembalikan nilai hari */
public:
    int ambilHari()
    {
        return this->hari;
    }

    /* Menetapkan nilai tahun. Tidak ada validasi input */
public:
    void setelTahun(int tahun)
    {
        this->tahun = tahun;
    }

    /* Menetapkan nilai Bulan. Tidak ada validasi input */
public:
    void setelBulan(int bulan)
    {
        this->bulan = bulan;
    }

    /* Menetapkan nilai hari. Tidak ada validasi input */
public:
    void setelHari(int hari)
    {
        this->hari = hari;
    }

    // Mengembalikan deskripsi dalam bentuk string dengan format 'DD/MM/YYYY' dengan awalan nol
public:
    string toString()
    {
        return (to_string(hari) + "/" + to_string(bulan) + "/" + to_string(tahun));
    }

    // Menetapkan tahun, bulan, dan hari. Tidak ada validasi input
public:
    void setDate(int tahun, int bulan, int hari)
    {
        this->tahun = tahun;
        this->bulan = bulan;
        this->hari = hari;
    }
};