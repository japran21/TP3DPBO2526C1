public class Kamera extends PerangkatKeras {
    private int resolusi;
    private String jenisLensa;

    public Kamera() {
        super();
        this.resolusi = 0;
        this.jenisLensa = "";
    }

    public Kamera(String namaPart, int hargaPart, int resolusi, String jenisLensa) {
        super(namaPart, hargaPart);
        this.resolusi = resolusi;
        this.jenisLensa = jenisLensa;
    }

    public int getResolusi() {
        return resolusi;
    }

    public String getJenisLensa() {
        return jenisLensa;
    }

    public void setResolusi(int resolusi) {
        this.resolusi = resolusi;
    }

    public void setJenisLensa(String jenisLensa) {
        this.jenisLensa = jenisLensa;
    }

    @Override
    public void tampilkanInfo() {
        System.out.print("Kamera: " + namaPart + " (" + resolusi + " MP, " + jenisLensa + ") - Rp " + hargaPart);
    }
}
