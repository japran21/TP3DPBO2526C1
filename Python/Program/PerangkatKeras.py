class PerangkatKeras:
    def __init__(self, namaPart="", hargaPart=0):
        self.namaPart = namaPart
        self.hargaPart = hargaPart

    def getNamaPart(self):
        return self.namaPart

    def getHargaPart(self):
        return self.hargaPart

    def setNamaPart(self, namaPart):
        self.namaPart = namaPart

    def setHargaPart(self, hargaPart):
        self.hargaPart = hargaPart

    def tampilkanInfo(self):
        print(f"{self.namaPart} | Rp {self.hargaPart}", end="")
