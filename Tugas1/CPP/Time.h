#include <iostream>
using namespace std;

// Class Time memodelkan contoh waktu dengan detik, menit, dan jam.
// Kelas ini tidak melakukan validasi input detik, menit, dan jam.
class Time{
    // Variabel instance private
    private :
    int detik, menit, jam;

    // Constructor
    /* membuat instance waktu dengan detik, menit, dan jam tertentu. Tidak ada validasi input */
    public :
    Time(int detik, int menit, int jam){
        this->detik = detik;
        this->menit = menit;
        this->jam = jam;
    }

    /* membuat instance waktu dengan nilai default */
    public :
    Time(){
        this->detik = 0;
        this->menit = 0;
        this->jam = 0;
    }

    // Setter/getter public untuk variabel private
    /* Mengembalikan nilai detik */
    public :
    int ambilDetik(){
        return this->detik;
    }

    /* mengembalikan nilai menit */
    public :
    int ambilMenit(){
        return this->menit;
    }

    /* Mengembalikan nilai jam */
    public :
    int ambilJam(){
        return this->jam;
    }

    /* Menyetel nilai detik. Tidak ada validasi input */
    public :
    void setelDetik(int detik){
        this->detik = detik;
    }

    /* menyetel nilai menit. Tidak ada validasi input */
    public :
    void setelMenit(int menit){
        this->menit = menit;
    }

    /* Menyetel nilai jam. Tidak ada validasi input */
    public :
    void setelJam(int jam){
        this->jam = jam;
    }

    // Mengembalikan deskripsi waktu dalam string dengan bentuk "hh:mm:ss" dengan angka nol didepannya
    public :
    string toString(){
        return (to_string(jam) + ":" + to_string(menit) + ":" + to_string(detik));
    }

    // Menyetel detik, menit, dan jam ke nilai yang diberikan
    public :
    void setelWaktu(int detik, int menit, int jam){
        /* Tidak ada validasi masukan */
        this->detik = detik;
        this->menit = menit;
        this->jam = jam;
    }

    // Memajukan instance Time ini satu detik, dan mengembalikan instance ini untuk mendukung rangkaian
    public :
    Time detikSelanjutnya(){
        ++detik;
        if (detik >= 60){
            detik = 0;
            ++menit;
            if (menit >= 60){
                menit = 0;
                ++jam;
                if (jam >= 24){
                    jam = 0;
                }
            }
        }
        return *this;
    }
};