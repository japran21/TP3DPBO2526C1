from PerangkatKeras import PerangkatKeras

class Layar(PerangkatKeras):
    def __init__(self, namaPart="", hargaPart=0, tipeLayar="", refreshRate=0):
        super().__init__(namaPart, hargaPart)
        self.tipeLayar = tipeLayar
        self.refreshRate = refreshRate

    def getTipeLayar(self):
        return self.tipeLayar

    def getRefreshRate(self):
        return self.refreshRate

    def setTipeLayar(self, tipeLayar):
        self.tipeLayar = tipeLayar

    def setRefreshRate(self, refreshRate):
        self.refreshRate = refreshRate

    def tampilkanInfo(self):
        print(f"Layar: {self.namaPart} ({self.tipeLayar}, {self.refreshRate} Hz) - Rp {self.hargaPart}", end="")
