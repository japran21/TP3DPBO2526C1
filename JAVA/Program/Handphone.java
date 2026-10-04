import java.util.ArrayList;
import java.util.List;

public class Handphone {
    private String namaHP;
    private Chipset chipset;
    private List<PerangkatKeras> komponen;

    public Handphone() {
        this.namaHP = "";
        this.chipset = new Chipset();
        this.komponen = new ArrayList<>();
    }

    public Handphone(String namaHP, String namaChipset, int jumlahCore) {
        this.namaHP = namaHP;
        this.chipset = new Chipset(namaChipset, jumlahCore);
        this.komponen = new ArrayList<>();
    }

    public String getNamaHP() {
        return namaHP;
    }

    public Chipset getChipset() {
        return chipset;
    }

    public void setNamaHP(String namaHP) {
        this.namaHP = namaHP;
    }

    public void setChipset(Chipset chipset) {
        this.chipset = chipset;
    }

    public void pasangKomponen(PerangkatKeras pk) {
        this.komponen.add(pk);
    }

    public int getTotalHarga() {
        int total = 0;
        for (PerangkatKeras item : komponen) {
            total += item.getHargaPart();
        }
        return total;
    }

    public int getJumlahKomponen() {
        return komponen.size();
    }

    public void tampilkanSpesifikasi() {
        System.out.println("Nama HP  : " + namaHP);
        System.out.print("Chipset  : ");
        chipset.tampilkanInfo();
        System.out.println();
        System.out.println("Komponen (" + komponen.size() + " item):");
        
        int totalHarga = 0;
        for (int i = 0; i < komponen.size(); i++) {
            System.out.print("  " + (i + 1) + ". ");
            komponen.get(i).tampilkanInfo();
            System.out.println();
            totalHarga += komponen.get(i).getHargaPart();
        }
        System.out.println("Total Biaya Part : Rp " + totalHarga);
    }
}
