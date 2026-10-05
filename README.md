# TP3DPBO2526C1
# JANJI
Saya Muhammad Ilal Zhafran dengan NIM 2502623 mengerjakan Tugas Praktikum 3 pada Mata Kuliah Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
# STRUKTUR FILEkardinalitas satu bandi
<img width="370" height="796" alt="image" src="https://github.com/user-attachments/assets/23083351-7744-49ae-92a1-2cb0fcfea1f6" />

# DESAIN DAN ALUR
<img width="593" height="699" alt="image" src="https://github.com/user-attachments/assets/5ecb6df7-de7d-4ed3-8ccc-18404862455a" />

Alur Desain ini dimulai dari entitas Handphone karena Handphone yang menjadi pemilik dan penghubung semua bagian, jadi di handphone ini hanya menyimpan 1 atribut yaitu namaHP.

Relasi pertama yaitu Handphone dan chipset dengan kardinalitas satu banding satu, maksdunya itu jadi setiap handphone memiliki tepat satu chipset dan satu chipset melekat dengan satu handphone, bisa dilihat di handphone yang dimana langsung membuat objek chipset dan namaChipset dan jumlahCore saat handphone dibuat. lalu chipset menyimpan 2 atribut, namachipset dan cpuCore. karena chipset tidak bisa berdiri sendiri tanpa handphone, jadi ini semua termasuk composition.

Relasi kedua yaitu antara hadnphone dan perangkat keras dengan kardinalitas satu banding banyak, maksudnya itu satu handphone bisa dipasang nol atau lebih komponen melalui menu Pasang Komponen.

Relasi ketiga yaitu perwarisan dari perangkatkeras ke layar dan kamera. jadi perangkatkeras sebagai entitas umum, sedangkan layar dan kamera bentuk khusus nya, jadi layar menambahkan atribut tipelayar dan refreshrate, kalau  kamera menambahkan resolusi dan jenislensa jadi duda duanya membawa namaPart dan hargaPart dari induknya.

# DOKUMENTASI

