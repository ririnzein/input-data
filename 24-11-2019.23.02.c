#include <stdio.h>

int main()
{
    int x;
    int y;
    int pilih;
    char ulang;

    do
    {

    //mengimput dua buah angka
    printf("Masukan angka pertama:");
    scanf("%d", &x);

    printf("Masukan angka kedua :");
    scanf("%d", &y);
    //tampilkan pilihan operasi perhitungan
    printf("Pilih operasi perhitungan:\n");
    printf("1. penjumlahan\n");
    printf("2. pengurangan\n");
    printf("3. perkalian\n");
    printf("4. pembagian\n");

    // pilih operasi perhitungan
    printf("pilih: ");
    scanf("%d", &pilih);


    // jika user memilih penjumlahan, lakukan penjumlahan dan sebagainya
    switch(pilih)
    {
        case 1:
            printf("%d + %d = %d\n", x, y, x + y);
            break;
        case 2 :
            printf("%d - %d = %d\n", x, y, x - y);
            break;
        case 3 :
            printf("%d * %d = %d\n", x, y, x * y);
            break;
        case 4 :
            printf("%d / %d = %d\n", x, y, x / y);
            break;
        default:
            printf("pilihan tidak valid!");
            break;

    }
    //jika user ingin mengulang perhitungan atau tidak
    printf("Apakah ingin melakukan perhitungan lagi? (Y/T)");
    scanf("%s", &ulang);

    }
    while (ulang == 'Y');

    return 0;
}
