#pragma once

#include <iostream>
#include <string>

using namespace std;

class PerangkatKeras {

protected:

    string namaPart;
    int hargaPart;

public:

    PerangkatKeras(string namaPart = "", int hargaPart = 0) {
        this->namaPart = namaPart;
        this->hargaPart = hargaPart;
    }

    virtual ~PerangkatKeras() {}

    string getNamaPart() {
        return namaPart;
    }

    int getHargaPart() {
        return hargaPart;
    }

    void setNamaPart(string namaPart) {
        this->namaPart = namaPart;
    }

    void setHargaPart(int hargaPart) {
        this->hargaPart = hargaPart;
    }

    virtual void tampilkanInfo() {
        cout << namaPart << " | Rp " << hargaPart;
    }
};
