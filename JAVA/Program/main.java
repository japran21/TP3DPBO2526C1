import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class main {
    public static void tampilkanMenuUtama() {
        System.out.println("\n========= MENU =========");
        System.out.println("1. Tambah Handphone");
        System.out.println("2. Pasang Komponen");
        System.out.println("3. Tampilkan Data");
        System.out.println("4. Keluar");
        System.out.println("========================");
        System.out.print("Pilih Menu : ");
    }

    public static void tampilkanMenuOpsi() {
        System.out.println("\n========= PILIH OPSI =========");
        System.out.println("1. Tampilkan Handphone");
        System.out.println("2. Tampilkan Biaya Part");
        System.out.println("3. Kembali");
        System.out.println("==============================");
        System.out.print("Pilih OPSI : ");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Handphone> daftarHP = new ArrayList<>();
        int pilihan = 0;

        do {
            tampilkanMenuUtama();
            if (!scanner.hasNextInt()) {
                scanner.next();
                System.out.println("Input tidak valid!");
                continue;
            }
            pilihan = scanner.nextInt();
            scanner.nextLine();

            if (pilihan == 1) {
                System.out.println("\n--- Tambah Handphone ---");
                System.out.print("Nama Handphone : ");
                String nama = scanner.nextLine();
                System.out.print("Nama Chipset   : ");
                String proc = scanner.nextLine();
                System.out.print("Jumlah Core    : ");
                int core = scanner.nextInt();
                scanner.nextLine();

                daftarHP.add(new Handphone(nama, proc, core));
                System.out.println("-> Handphone berhasil ditambahkan!");
            }
            else if (pilihan == 2) {
                if (daftarHP.isEmpty()) {
                    System.out.println("\nBelum ada data Handphone. Silakan tambah data terlebih dahulu.");
                    continue;
                }

                System.out.println("\n--- Pilih Handphone ---");
                for (int i = 0; i < daftarHP.size(); i++) {
                    System.out.println((i + 1) + ". " + daftarHP.get(i).getNamaHP());
                }
                System.out.print("Pilih [1-" + daftarHP.size() + "]: ");
                int idx = scanner.nextInt();
                scanner.nextLine();

                if (idx < 1 || idx > daftarHP.size()) {
                    System.out.println("Pilihan tidak valid!");
                    continue;
                }

                Handphone target = daftarHP.get(idx - 1);

                System.out.println("\n--- Pasang Komponen ---");
                System.out.println("1. Layar");
                System.out.println("2. Kamera");
                System.out.print("Pilih Jenis [1-2]: ");
                int jenis = scanner.nextInt();
                scanner.nextLine();

                if (jenis == 1) {
                    System.out.print("Nama Layar   : ");
                    String namaPart = scanner.nextLine();
                    System.out.print("Harga (Rp)   : ");
                    int harga = scanner.nextInt();
                    scanner.nextLine();
                    System.out.print("Tipe Layar   : ");
                    String tipeLayar = scanner.nextLine();
                    System.out.print("Refresh Rate : ");
                    int refreshRate = scanner.nextInt();
                    scanner.nextLine();

                    target.pasangKomponen(new Layar(namaPart, harga, tipeLayar, refreshRate));
                    System.out.println("-> Layar berhasil dipasang!");
                }
                else if (jenis == 2) {
                    System.out.print("Nama Kamera  : ");
                    String namaPart = scanner.nextLine();
                    System.out.print("Harga (Rp)   : ");
                    int harga = scanner.nextInt();
                    System.out.print("Resolusi(MP) : ");
                    int resolusi = scanner.nextInt();
                    scanner.nextLine();
                    System.out.print("Jenis Lensa  : ");
                    String jenisLensa = scanner.nextLine();

                    target.pasangKomponen(new Kamera(namaPart, harga, resolusi, jenisLensa));
                    System.out.println("-> Kamera berhasil dipasang!");
                }
            }
            else if (pilihan == 3) {
                int opsi = 0;
                do {
                    tampilkanMenuOpsi();
                    if (!scanner.hasNextInt()) {
                        scanner.next();
                        System.out.println("Input tidak valid!");
                        continue;
                    }
                    opsi = scanner.nextInt();
                    scanner.nextLine();

                    if (opsi == 1) {
                        if (daftarHP.isEmpty()) {
                            System.out.println("\nBelum ada data Handphone.");
                        } else {
                            System.out.println("\n--- DATA HANDPHONE ---");
                            for (int i = 0; i < daftarHP.size(); i++) {
                                System.out.println("\n[ Handphone #" + (i + 1) + " ]");
                                daftarHP.get(i).tampilkanSpesifikasi();
                            }
                        }
                    }
                    else if (opsi == 2) {
                        if (daftarHP.isEmpty()) {
                            System.out.println("\nBelum ada data Handphone.");
                        } else {
                            System.out.println("\n--- BIAYA KOMPONEN ---");
                            int total = 0;
                            for (int i = 0; i < daftarHP.size(); i++) {
                                System.out.println((i + 1) + ". " + daftarHP.get(i).getNamaHP() 
                                    + " (" + daftarHP.get(i).getJumlahKomponen() + " part) : Rp "
                                    + daftarHP.get(i).getTotalHarga());
                                total += daftarHP.get(i).getTotalHarga();
                            }
                            System.out.println("Total Keseluruhan : Rp " + total);
                        }
                    }
                } while (opsi != 3);
            }
        } while (pilihan != 4);

        System.out.println("\nTerima kasih!");
        scanner.close();
    }
}
