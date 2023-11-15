/**
 * Kelas Akun memodelkan rekening bank dengan saldo.
 */
public class Account {
    // Variabel instance privat
    private int nomor;
    private double saldo;

    // Konstruktor (kelebihan beban)
    /**
     * Membuat instance Akun dengan angka yang diberikan dan saldo awal 0
     */
    public Account(int nomor) {
        this.nomor = nomor;
        this.saldo = 0.0; // "this." opsional
    }

    /** Membuat instance Akun dengan angka dan saldo awal yang diberikan */
    public Account(int nomor, double saldo) {
        this.nomor = nomor;
        this.saldo = saldo;
    }

    // Pengambil/pengatur publik untuk variabel instan privat.
    // Tidak ada pengatur angka karena tidak dirancang untuk diubah.
    // Tidak ada pengatur saldo karena diubah melalui kredit() dan debit()
    /** Mengembalikan angka */
    public int getNomor() {
        return this.nomor; // "this." opsional
    }

    /** Mengembalikan saldo */
    public double getSaldo() {
        return this.saldo; // "this." opsional
    }

    /** Mengembalikan deskripsi string dari instance ini */
    public String toString() {
        // Gunakan fungsi bawaan System.format() untuk membentuk String yang diformat
        return String.format("Account[nomor=%d,saldo=$%.2f]", nomor, saldo);
    }

    /** Tambahkan jumlah yang ditentukan ke saldo */
    public void kredit(double jumlah) {
        saldo += jumlah;
    }

    /** Kurangi jumlah tertentu dari saldo, jika saldo >= jumlah */
    public void debit(double jumlah) {
        if (saldo >= jumlah) {
            saldo -= jumlah;
        } else {
            System.out.println("Saldo tidak mencukupi");
        }
    }

    /** Transfer sejumlah uang ke Account lain, jika saldo >= jumlah */
    public void transferTo(double jumlah, Account lainnya) {
        if (saldo >= jumlah) {
            this.saldo -= jumlah;
            lainnya.saldo += jumlah;
        } else {
            System.out.println("Saldo tidak mencukupi");
        }
    }
}