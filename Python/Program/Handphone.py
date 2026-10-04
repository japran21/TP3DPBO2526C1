from Chipset import Chipset
from PerangkatKeras import PerangkatKeras

class Handphone:
    def __init__(self, namaHP="", namaChipset="", jumlahCore=0):
        self.namaHP = namaHP
        self.chipset = Chipset(namaChipset, jumlahCore)
        self.komponen = []

    def getNamaHP(self):
        return self.namaHP

    def getChipset(self):
        return self.chipset

    def setNamaHP(self, namaHP):
        self.namaHP = namaHP

    def setChipset(self, chipset):
        self.chipset = chipset

    def pasangKomponen(self, pk: PerangkatKeras):
        self.komponen.append(pk)

    def getTotalHarga(self):
        total = 0
        for item in self.komponen:
            total += item.getHargaPart()
        return total

    def getJumlahKomponen(self):
        return len(self.komponen)

    def tampilkanSpesifikasi(self):
        print(f"Nama HP  : {self.namaHP}")
        print("Chipset  : ", end="")
        self.chipset.tampilkanInfo()
        print()
        print(f"Komponen ({len(self.komponen)} item):")
        
        totalHarga = 0
        for i, item in enumerate(self.komponen):
            print(f"  {i + 1}. ", end="")
            item.tampilkanInfo()
            print()
            totalHarga += item.getHargaPart()
            
        print(f"Total Biaya Part : Rp {totalHarga}")
