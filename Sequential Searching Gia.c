#include <stdio.h>

int main() {

    printf("********************************************************\n\n");
    printf("\t\tSEQUENTIAL SEARCHING\n\n");
    printf("********************************************************\n\n");
  int n, i, cari[2], get = 0;
  printf("Mau berapa data yang disimpan? ");
  scanf("%d", &n);
  int data[n];
  printf("Masukkan %d integer \n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &data[i]);

  printf("Mau angka yang dicari ke %d ? ", 1);
  scanf("%d", &cari[0]);
  printf("Mau angka yang dicari ke %d ? ", 2);
  scanf("%d", &cari[1]);
  for (i = 0; i < n; i++) {
    for (int k = 0; k < 2; k++) {
      if (data[i] == cari[k]) {
        printf("Angka %d berhasil ditemukan dilokasi ke %d\n", cari[k], i);
        get++;
      }
    }
  }
  if (get > 0) {
    printf("Angka berhasil ditemukan sebanyak %d", get);
  } else {
    printf("Tidak ada angka yang ditemukan ");
  }
}
