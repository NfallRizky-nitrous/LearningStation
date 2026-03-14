#include <iostream>
#include <vector>
using namespace std;

struct Rekening {
    string nama;
    int noRek;
    double saldo;
};

int main() {
    vector<Rekening> bank;
    int pilihan;
    int nextNoRek = 1001; // nomor rekening awal

    do {
        cout << "\n===== SIMPLE BANK SYSTEM =====\n";
        cout << "1. Buat rekening baru\n";
        cout << "2. Setor uang\n";
        cout << "3. Tarik uang\n";
        cout << "4. Cek saldo\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        if(pilihan == 1) {
            Rekening baru;
            cout << "Nama nasabah: ";
            getline(cin, baru.nama);
            baru.noRek = nextNoRek++;
            baru.saldo = 0;
            bank.push_back(baru);
            cout << "Rekening berhasil dibuat! Nomor: " << baru.noRek << endl;
        }
        else if(pilihan == 2) {
            int no;
            double jumlah;
            cout << "Nomor rekening: ";
            cin >> no;
            bool found = false;
            for(auto &r : bank) {
                if(r.noRek == no) {
                    cout << "Jumlah setor: ";
                    cin >> jumlah;
                    r.saldo += jumlah;
                    cout << "Saldo baru: Rp" << r.saldo << endl;
                    found = true;
                    break;
                }
            }
            if(!found) cout << "Rekening tidak ditemukan.\n";
        }
        else if(pilihan == 3) {
            int no;
            double jumlah;
            cout << "Nomor rekening: ";
            cin >> no;
            bool found = false;
            for(auto &r : bank) {
                if(r.noRek == no) {
                    cout << "Jumlah tarik: ";
                    cin >> jumlah;
                    if(jumlah <= r.saldo) {
                        r.saldo -= jumlah;
                        cout << "Saldo baru: Rp" << r.saldo << endl;
                    } else {
                        cout << "Saldo tidak cukup!\n";
                    }
                    found = true;
                    break;
                }
            }
            if(!found) cout << "Rekening tidak ditemukan.\n";
        }
        else if(pilihan == 4) {
            int no;
            cout << "Nomor rekening: ";
            cin >> no;
            bool found = false;
            for(auto &r : bank) {
                if(r.noRek == no) {
                    cout << "Nama: " << r.nama << ", Saldo: Rp" << r.saldo << endl;
                    found = true;
                    break;
                }
            }
            if(!found) cout << "Rekening tidak ditemukan.\n";
        }

    } while(pilihan != 5);

    cout << "Terima kasih telah menggunakan Simple Bank System!\n";
    return 0;
}