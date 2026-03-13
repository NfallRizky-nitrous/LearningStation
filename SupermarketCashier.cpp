#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah;
    char lagi;

    int harga[4] = {3000, 4000, 5000, 7000};
    string produk[4] = {"Indomie", "Aqua", "Roti", "Susu"};

    int total = 0;

    cout << "===== SUPERMARKET CASHIER =====" << endl;

    do {
        cout << "\nDaftar Produk:\n";
        for(int i = 0; i < 4; i++) {
            cout << i+1 << ". " << produk[i] << " - Rp" << harga[i] << endl;
        }

        cout << "\nPilih produk (1-4): ";
        cin >> pilihan;

        cout << "Jumlah: ";
        cin >> jumlah;

        int subtotal = harga[pilihan-1] * jumlah;
        total += subtotal;

        cout << "Subtotal: Rp" << subtotal << endl;

        cout << "\nTambah barang lagi? (y/n): ";
        cin >> lagi;

    } while(lagi == 'y' || lagi == 'Y');

    cout << "\n===== STRUK BELANJA =====" << endl;
    cout << "Total Bayar: Rp" << total << endl;
    cout << "Terima kasih sudah berbelanja!" << endl;

    return 0;
}