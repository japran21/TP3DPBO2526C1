#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Chipset.cpp"
#include "PerangkatKeras.cpp"

using namespace std;

class Handphone {

private:

    string namaHP;
    Chipset chipset;
    vector<PerangkatKeras*> komponen;

public:

    Handphone(string namaHP = "", string namaChipset = "", int jumlahCore = 0) {
        this->namaHP = namaHP;
        this->chipset = Chipset(namaChipset, jumlahCore);
    }

    ~Handphone() {
        for (size_t i = 0; i < komponen.size(); i++) {
            delete komponen[i];
        }
        komponen.clear();
    }

    string getNamaHP() {
        return namaHP;
    }

    Chipset getChipset() {
        return chipset;
    }

    void setNamaHP(string namaHP) {
        this->namaHP = namaHP;
    }

    void setChipset(Chipset chipset) {
        this->chipset = chipset;
    }

    void pasangKomponen(PerangkatKeras* pk) {
        komponen.push_back(pk);
    }

    int getTotalHarga() {
        int total = 0;
        for (size_t i = 0; i < komponen.size(); i++) {
            total += komponen[i]->getHargaPart();
        }
        return total;
    }

    int getJumlahKomponen() {
        return komponen.size();
    }

    void tampilkanSpesifikasi() {
        cout << "Nama HP  : " << namaHP << endl;
        cout << "Chipset  : ";
        chipset.tampilkanInfo();
        cout << endl;
        cout << "Komponen (" << komponen.size() << " item):" << endl;

        int totalHarga = 0;
        for (size_t i = 0; i < komponen.size(); i++) {
            cout << "  " << i + 1 << ". ";
            komponen[i]->tampilkanInfo();
            cout << endl;
            totalHarga += komponen[i]->getHargaPart();
        }
        cout << "Total Biaya Part : Rp " << totalHarga << endl;
    }
};
