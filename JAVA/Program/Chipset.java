public class Chipset {
    private String namaChipset;
    private int cpuCore;

    public Chipset() {
        this.namaChipset = "";
        this.cpuCore = 0;
    }

    public Chipset(String namaChipset, int cpuCore) {
        this.namaChipset = namaChipset;
        this.cpuCore = cpuCore;
    }

    public String getNamaChipset() {
        return namaChipset;
    }

    public int getCpuCore() {
        return cpuCore;
    }

    public void setNamaChipset(String namaChipset) {
        this.namaChipset = namaChipset;
    }

    public void setCpuCore(int cpuCore) {
        this.cpuCore = cpuCore;
    }

    public void tampilkanInfo() {
        System.out.print(namaChipset + " (" + cpuCore + " Core)");
    }
}
