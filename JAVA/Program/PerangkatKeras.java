public class PerangkatKeras {
    protected String namaPart;
    protected int hargaPart;

    public PerangkatKeras() {
        this.namaPart = "";
        this.hargaPart = 0;
    }

    public PerangkatKeras(String namaPart, int hargaPart) {
        this.namaPart = namaPart;
        this.hargaPart = hargaPart;
    }

    public String getNamaPart() {
        return namaPart;
    }

    public int getHargaPart() {
        return hargaPart;
    }

    public void setNamaPart(String namaPart) {
        this.namaPart = namaPart;
    }

    public void setHargaPart(int hargaPart) {
        this.hargaPart = hargaPart;
    }

    public void tampilkanInfo() {
        System.out.print(namaPart + " | Rp " + hargaPart);
    }
}
