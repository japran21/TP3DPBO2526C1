public class Layar extends PerangkatKeras {
    private String tipeLayar;
    private int refreshRate;

    public Layar() {
        super();
        this.tipeLayar = "";
        this.refreshRate = 0;
    }

    public Layar(String namaPart, int hargaPart, String tipeLayar, int refreshRate) {
        super(namaPart, hargaPart);
        this.tipeLayar = tipeLayar;
        this.refreshRate = refreshRate;
    }

    public String getTipeLayar() {
        return tipeLayar;
    }

    public int getRefreshRate() {
        return refreshRate;
    }

    public void setTipeLayar(String tipeLayar) {
        this.tipeLayar = tipeLayar;
    }

    public void setRefreshRate(int refreshRate) {
        this.refreshRate = refreshRate;
    }

    @Override
    public void tampilkanInfo() {
        System.out.print("Layar: " + namaPart + " (" + tipeLayar + ", " + refreshRate + " Hz) - Rp " + hargaPart);
    }
}
