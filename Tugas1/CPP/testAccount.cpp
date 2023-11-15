#include <iostream>
#include "Account.h"
using namespace std;

int main(){
    // Test konstruktor dan toString
    /* konstruktor saldo awal 0 */
    Account a1(5566);
    /* string */
    cout << a1.toString();
    /* konstruktor nomor dan saldo diberikan */
    Account a2(1234,99.9);
    cout << a2.toString();

    // Test getter
    cout << "Nomor Rekening : " << a1.ambilNomor() << endl;
    cout << "Saldo : " << a1.ambilSaldo() << endl;

    // Test kredit, debit, dan transfer
    a1.kredit(1.1);
    cout << a1.toString() << endl;
    a1.debit(5.5);
    cout << a1.toString() << endl;
    a1.debit(500);
    cout << a1.toString() << endl;
    a2.transfer(1.0,a1);
    cout << a1.toString() << endl;
    cout << a2.toString() << endl;

    return 0;
}