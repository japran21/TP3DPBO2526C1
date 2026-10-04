#pragma once

#include <iostream>
#include <string>
#include "PerangkatKeras.cpp"

using namespace std;

class Layar : public PerangkatKeras {

private:

    string tipeLayar;
    int refreshRate;

public:

    Layar(string namaPart = "", int hargaPart = 0, string tipeLayar = "", int refreshRate = 0) 
        : PerangkatKeras(namaPart, hargaPart) {
        this->tipeLayar = tipeLayar;
        this->refreshRate = refreshRate;
    }

    string getTipeLayar() {
        return tipeLayar;
    }

    int getRefreshRate() {
        return refreshRate;
    }

    void setTipeLayar(string tipeLayar) {
        this->tipeLayar = tipeLayar;
    }

    void setRefreshRate(int refreshRate) {
        this->refreshRate = refreshRate;
    }

    void tampilkanInfo() override {
        cout << "Layar: " << namaPart << " (" << tipeLayar << ", " << refreshRate << " Hz) - Rp " << hargaPart;
    }
};
