from PerangkatKeras import PerangkatKeras

class Kamera(PerangkatKeras):
    def __init__(self, namaPart="", hargaPart=0, resolusi=0, jenisLensa=""):
        super().__init__(namaPart, hargaPart)
        self.resolusi = resolusi
        self.jenisLensa = jenisLensa

    def getResolusi(self):
        return self.resolusi

    def getJenisLensa(self):
        return self.jenisLensa

    def setResolusi(self, resolusi):
        self.resolusi = resolusi

    def setJenisLensa(self, jenisLensa):
        self.jenisLensa = jenisLensa

    def tampilkanInfo(self):
        print(f"Kamera: {self.namaPart} ({self.resolusi} MP, {self.jenisLensa}) - Rp {self.hargaPart}", end="")
