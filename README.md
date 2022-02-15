# Penjelasan Searching
Searching adalah pencarian data dengan cara menelusuri data-data tersebut. Tempat pencarian data dapat berupa array dalam memori (pencarian internal), bisa juga pada file pada external storage(pencarian external).
# Metode Pencarian
# Penjelasan Sequential Searching 
• Merupakan suatu teknik pencarian data dalam array (1 dimensi) yang akan menelusuri semua elemen-elemen array dari awal sampai akhir, dimana data-data tidak perlu diurutkan terlebih dahulu. Pencarian berurutan menggunakan prinsip sebagai berikut : data yang ada dibandingkan satu per satu secara berurutan dengan yang dicari sampai data tersebut ditemukan atau tidak ditemukan. 
 •	Pencarian sekuensial digunakan apabila data dalam keadaan acak atau tidak terurut 
 # Penjelasan Binary Searching  
 •  Pencarian biner digunakan pada data yang sudah dalam keadaan urut 
 •  Salah satu syarat agar binary search dapat dilakukan adalah data sudah dalam keadaan urut. Dengan kata lain, apabila data belum dalam keadaan urut, binary search tidak dapat dilakukan.
 Algoritma dari binary search adalah:
1. Yang pertama menentukan posisi awal = 0 dan posisi akhir = N – 1
2. Kemudian menghitung posisi tengah = (posisi awal + posisi akhir) / 2
3. Dan bandingkan data yang dicari dengan elemen posisi tengah
-      Jika data yang dicari sama maka catat posisi dan cetak kemudian berhenti
-      Jika lebih besar maka akan dilakukan pencarian kembali ke bagian kiri dengan nilai      posisi awal = posisi tengah + 1 dan posisi akhir tetap kemudian ulangi mulai poin 2
-      Jika nilai datanya lebih kecil maka akan dilakukan pencarian kembali ke bagian kiri dengan nilai posisi awal tetap dan nilai posisi akhir = posisi tengah – 1 kemudian ulangi mulai poin 2.

