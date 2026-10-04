class Chipset:
    def __init__(self, namaChipset="", cpuCore=0):
        self.namaChipset = namaChipset
        self.cpuCore = cpuCore

    def getNamaChipset(self):
        return self.namaChipset

    def getCpuCore(self):
        return self.cpuCore

    def setNamaChipset(self, namaChipset):
        self.namaChipset = namaChipset

    def setCpuCore(self, cpuCore):
        self.cpuCore = cpuCore

    def tampilkanInfo(self):
        print(f"{self.namaChipset} ({self.cpuCore} Core)", end="")
