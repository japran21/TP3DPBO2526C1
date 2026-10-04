#include <iostream>
#include <vector>
#include <string>
#include "Handphone.cpp"
#include "Layar.cpp"
#include "Kamera.cpp"

using namespace std;

void tampilkanMenuUtama() {
    cout << "\n========= MENU =========" << endl;
    cout << "1. Tambah Handphone" << endl;
    cout << "2. Pasang Komponen" << endl;
    cout << "3. Tampilkan Data" << endl;
    cout << "4. Keluar" << endl;
    cout << "========================" << endl;
    cout << "Pilih Menu : ";
}

void tampilkanMenuOpsi() {
    cout << "\n========= PILIH OPSI =========" << endl;
    cout << "1. Tampilkan Handphone" << endl;
    cout << "2. Tampilkan Biaya Part" << endl;
    cout << "3. Kembali" << endl;
    cout << "==============================" << endl;
    cout << "Pilih OPSI : ";
}

int main() {
    vector<Handphone*> daftarHP;
    int pilihan = 0;

    do {
        tampilkanMenuUtama();
        if (!(cin >> pilihan)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Input tidak valid!" << endl;
            continue;
        }

        if (pilihan == 1) {
            string nama, proc;
            int core;

            cin.ignore(10000, '\n');
            cout << "\n--- Tambah Handphone ---" << endl;
            cout << "Nama Handphone : ";
            getline(cin, nama);
            cout << "Nama Chipset   : ";
            getline(cin, proc);
            cout << "Jumlah Core    : ";
            cin >> core;

            daftarHP.push_back(new Handphone(nama, proc, core));
            cout << "-> Handphone berhasil ditambahkan!" << endl;
        }
        else if (pilihan == 2) {
            if (daftarHP.empty()) {
                cout << "\nBelum ada data Handphone. Silakan tambah data terlebih dahulu." << endl;
                continue;
            }

            cout << "\n--- Pilih Handphone ---" << endl;
            for (size_t i = 0; i < daftarHP.size(); i++) {
                cout << i + 1 << ". " << daftarHP[i]->getNamaHP() << endl;
            }
            cout << "Pilih [1-" << daftarHP.size() << "]: ";
            int idx;
            cin >> idx;

            if (idx < 1 || idx > (int)daftarHP.size()) {
                cout << "Pilihan tidak valid!" << endl;
                continue;
            }

            Handphone* target = daftarHP[idx - 1];

            cout << "\n--- Pasang Komponen ---" << endl;
            cout << "1. Layar" << endl;
            cout << "2. Kamera" << endl;
            cout << "Pilih Jenis [1-2]: ";
            int jenis;
            cin >> jenis;

            cin.ignore(10000, '\n');
            if (jenis == 1) {
                string namaPart, tipeLayar;
                int harga, refreshRate;
                cout << "Nama Layar   : ";
                getline(cin, namaPart);
                cout << "Harga (Rp)   : ";
                cin >> harga;
                cin.ignore(10000, '\n');
                cout << "Tipe Layar   : ";
                getline(cin, tipeLayar);
                cout << "Refresh Rate : ";
                cin >> refreshRate;

                target->pasangKomponen(new Layar(namaPart, harga, tipeLayar, refreshRate));
                cout << "-> Layar berhasil dipasang!" << endl;
            }
            else if (jenis == 2) {
                string namaPart, jenisLensa;
                int harga, resolusi;
                cout << "Nama Kamera  : ";
                getline(cin, namaPart);
                cout << "Harga (Rp)   : ";
                cin >> harga;
                cout << "Resolusi(MP) : ";
                cin >> resolusi;
                cin.ignore(10000, '\n');
                cout << "Jenis Lensa  : ";
                getline(cin, jenisLensa);

                target->pasangKomponen(new Kamera(namaPart, harga, resolusi, jenisLensa));
                cout << "-> Kamera berhasil dipasang!" << endl;
            }
        }
        else if (pilihan == 3) {
            int opsi = 0;
            do {
                tampilkanMenuOpsi();
                if (!(cin >> opsi)) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Input tidak valid!" << endl;
                    continue;
                }

                if (opsi == 1) {
                    if (daftarHP.empty()) {
                        cout << "\nBelum ada data Handphone." << endl;
                    } else {
                        cout << "\n--- DATA HANDPHONE ---" << endl;
                        for (size_t i = 0; i < daftarHP.size(); i++) {
                            cout << "\n[ Handphone #" << i + 1 << " ]" << endl;
                            daftarHP[i]->tampilkanSpesifikasi();
                        }
                    }
                }
                else if (opsi == 2) {
                    if (daftarHP.empty()) {
                        cout << "\nBelum ada data Handphone." << endl;
                    } else {
                        cout << "\n--- BIAYA KOMPONEN ---" << endl;
                        int total = 0;
                        for (size_t i = 0; i < daftarHP.size(); i++) {
                            cout << i + 1 << ". " << daftarHP[i]->getNamaHP() 
                                 << " (" << daftarHP[i]->getJumlahKomponen() << " part) : Rp "
                                 << daftarHP[i]->getTotalHarga() << endl;
                            total += daftarHP[i]->getTotalHarga();
                        }
                        cout << "Total Keseluruhan : Rp " << total << endl;
                    }
                }
            } while (opsi != 3);
        }
    } while (pilihan != 4);

    for (size_t i = 0; i < daftarHP.size(); i++) {
        delete daftarHP[i];
    }
    daftarHP.clear();

    cout << "\nTerima kasih!" << endl;
    return 0;
}
