#pragma once

#include <iostream>
#include <string>

using namespace std;

class Chipset {

private:

    string namaChipset;
    int cpuCore;

public:

    Chipset(string namaChipset = "", int cpuCore = 0) {
        this->namaChipset = namaChipset;
        this->cpuCore = cpuCore;
    }

    string getNamaChipset() {
        return namaChipset;
    }

    int getCpuCore() {
        return cpuCore;
    }

    void setNamaChipset(string namaChipset) {
        this->namaChipset = namaChipset;
    }

    void setCpuCore(int cpuCore) {
        this->cpuCore = cpuCore;
    }

    void tampilkanInfo() {
        cout << namaChipset << " (" << cpuCore << " Core)";
    }
};
