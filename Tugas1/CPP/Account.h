#include <iostream>
using namespace std;

// Class Account memodelkan rekening bank dengan saldo
class Account{
    // Variabel instance private
    private :
    int nomor;
    double saldo;

    // Constructor (Overloading)
    /* membuat instance akun dengan angka yang diberikan dan saldo awal 0 */
    public :
    Account(int nomor){
        this->nomor = nomor;
        this->saldo = 0.0;
    }

    /* membuat instance akun dengan angka dan saldo awal yang diberikan */
    public :
    Account(int nomor, double saldo){
        this->nomor = nomor;
        this->saldo = saldo;
    }

    // Getter/setter public untuk variabel instance private
    // tidak ada pengatur angka karena tidak dirancang untuk diubah
    // tidak ada pengatur saldo karena diubah melalui kredit dan debit
    /* mengembalikan angka */
    public :
    int ambilNomor(){
        return this->nomor;
    }

    /* mengembalikan saldo */
    public :
    double ambilSaldo(){
        return this->saldo;
    }

    /* mengembalikan deskripsi string dari instance ini */
    public :
    string toString(){
        return "Account[nomor : " + to_string(nomor) + " saldo : $" + to_string(saldo) + "]";
    }

    /* tambahkan jumlah yang ditentukan ke saldo */
    public :
    void kredit(double jumlah){
        saldo += jumlah;
    }

    /* kurangi jumlah tertentu dari saldo, jika saldo >= jumlah */
    public :
    void debit(double jumlah){
        if(saldo >= jumlah){
            saldo -= jumlah;
        } else {
            cout << "Saldo tidak mencukupi" << endl;
        }
    }

    /* transfer sejumlah uang ke Account lain, jika saldo >= jumlah */
    public :
    void transfer(double jumlah, Account lainnya){
        if(saldo >= jumlah){
            this->saldo -= jumlah;
            lainnya.saldo += jumlah;
        } else {
            cout << "Saldo tidak mencukupi" << endl;
        }
    }
};