#pragma once

#include <iostream>
#include <string>
#include "PerangkatKeras.cpp"

using namespace std;

class Kamera : public PerangkatKeras {

private:

    int resolusi;
    string jenisLensa;

public:

    Kamera(string namaPart = "", int hargaPart = 0, int resolusi = 0, string jenisLensa = "") 
        : PerangkatKeras(namaPart, hargaPart) {
        this->resolusi = resolusi;
        this->jenisLensa = jenisLensa;
    }

    int getResolusi() {
        return resolusi;
    }

    string getJenisLensa() {
        return jenisLensa;
    }

    void setResolusi(int resolusi) {
        this->resolusi = resolusi;
    }

    void setJenisLensa(string jenisLensa) {
        this->jenisLensa = jenisLensa;
    }

    void tampilkanInfo() override {
        cout << "Kamera: " << namaPart << " (" << resolusi << " MP, " << jenisLensa << ") - Rp " << hargaPart;
    }
};
