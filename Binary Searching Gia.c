#include <stdio.h>

int biner ( int cari ,int n , int angka[])
{
    int akhir ,awal ,tengah ,ketemu , i;

    akhir = n - 1; awal = 0; ketemu = -1; i = 0;
    while ( ketemu == -1 && i < n )
    {
        tengah = ( awal+ akhir ) / 2;

            if ( angka[tengah] == cari )
        {
            ketemu = tengah;
        }
        else
        {
            if ( angka[tengah] < cari )
            {
                awal = tengah + 1;
            }
            else
            {
                akhir = tengah - 1;
            }
        }i++;
    }return ketemu;
}

int main ()
{
    printf("*******************************************************\n\n");
    printf("\t\tBINARY SEARCHING\n\n");
    printf("*******************************************************\n\n");

    int cari , hasil , i , n;
    int angka[50];

    printf("Berapa data yang ingin di input : ");
    scanf("%d" , &n);

    printf("\nInput angka secara terurut \n");
    for ( i = 0; i < n; i ++ )
    {
        printf("Data ke - %d : ", i+1);
        scanf("%d", &angka[i]);
    }

    printf("Berapa angka yang ingin dicari: ");
    scanf("%d", &cari);

    hasil = biner ( cari , n ,angka );

    if  ( hasil == - 1 )
    {
        printf("\nData tidak ditemukan !! ");
    }
    else
    {
        printf("\nAngka %d ditemukan di indeks ke %d", cari ,hasil+1);
    }

    return 0;
}
