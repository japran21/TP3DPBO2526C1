from Handphone import Handphone
from Layar import Layar
from Kamera import Kamera

def tampilkanMenuUtama():
    print("\n========= MENU =========")
    print("1. Tambah Handphone")
    print("2. Pasang Komponen")
    print("3. Tampilkan Data")
    print("4. Keluar")
    print("========================")

def tampilkanMenuOpsi():
    print("\n========= PILIH OPSI =========")
    print("1. Tampilkan Handphone")
    print("2. Tampilkan Biaya Part")
    print("3. Kembali")
    print("==============================")

def main():
    daftarHP = []

    while True:
        tampilkanMenuUtama()
        try:
            pilihan = int(input("Pilih Menu : "))
        except ValueError:
            print("Input tidak valid!")
            continue

        if pilihan == 1:
            print("\n--- Tambah Handphone ---")
            nama = input("Nama Handphone : ")
            proc = input("Nama Chipset   : ")
            try:
                core = int(input("Jumlah Core    : "))
            except ValueError:
                print("Input jumlah core tidak valid!")
                continue

            daftarHP.append(Handphone(nama, proc, core))
            print("-> Handphone berhasil ditambahkan!")

        elif pilihan == 2:
            if not daftarHP:
                print("\nBelum ada data Handphone. Silakan tambah data terlebih dahulu.")
                continue

            print("\n--- Pilih Handphone ---")
            for i, hp in enumerate(daftarHP):
                print(f"{i + 1}. {hp.getNamaHP()}")

            try:
                idx = int(input(f"Pilih [1-{len(daftarHP)}]: "))
            except ValueError:
                print("Pilihan tidak valid!")
                continue

            if idx < 1 or idx > len(daftarHP):
                print("Pilihan tidak valid!")
                continue

            target = daftarHP[idx - 1]

            print("\n--- Pasang Komponen ---")
            print("1. Layar")
            print("2. Kamera")
            try:
                jenis = int(input("Pilih Jenis [1-2]: "))
            except ValueError:
                print("Pilihan tidak valid!")
                continue

            if jenis == 1:
                namaPart = input("Nama Layar   : ")
                try:
                    harga = int(input("Harga (Rp)   : "))
                except ValueError:
                    print("Input harga tidak valid!")
                    continue
                tipeLayar = input("Tipe Layar   : ")
                try:
                    refreshRate = int(input("Refresh Rate : "))
                except ValueError:
                    print("Input refresh rate tidak valid!")
                    continue

                target.pasangKomponen(Layar(namaPart, harga, tipeLayar, refreshRate))
                print("-> Layar berhasil dipasang!")

            elif jenis == 2:
                namaPart = input("Nama Kamera  : ")
                try:
                    harga = int(input("Harga (Rp)   : "))
                    resolusi = int(input("Resolusi(MP) : "))
                except ValueError:
                    print("Input angka tidak valid!")
                    continue
                jenisLensa = input("Jenis Lensa  : ")

                target.pasangKomponen(Kamera(namaPart, harga, resolusi, jenisLensa))
                print("-> Kamera berhasil dipasang!")

        elif pilihan == 3:
            while True:
                tampilkanMenuOpsi()
                try:
                    opsi = int(input("Pilih OPSI : "))
                except ValueError:
                    print("Input tidak valid!")
                    continue

                if opsi == 1:
                    if not daftarHP:
                        print("\nBelum ada data Handphone.")
                    else:
                        print("\n--- DATA HANDPHONE ---")
                        for i, hp in enumerate(daftarHP):
                            print(f"\n[ Handphone #{i + 1} ]")
                            hp.tampilkanSpesifikasi()

                elif opsi == 2:
                    if not daftarHP:
                        print("\nBelum ada data Handphone.")
                    else:
                        print("\n--- BIAYA KOMPONEN ---")
                        total = 0
                        for i, hp in enumerate(daftarHP):
                            print(f"{i + 1}. {hp.getNamaHP()} ({hp.getJumlahKomponen()} part) : Rp {hp.getTotalHarga()}")
                            total += hp.getTotalHarga()
                        print(f"Total Keseluruhan : Rp {total}")

                elif opsi == 3:
                    break

        elif pilihan == 4:
            print("\nTerima kasih!")
            break

if __name__ == "__main__":
    main()
