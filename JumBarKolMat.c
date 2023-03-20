/* Nama File    		: JumBarKolMat.c */
/* Deskripsi    		: menampilkan jumlah setiap baris dan kolom pada tabel T (matrik) */
/* Pembuat      		: Rahman Hanif aji Saputra - 24060122140128 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int i,j,sum,**arr,baris,kolom;
    //int arr[3][3]={{1,3,5},{2,5,2},{4,2,4}};
    //int baris = sizeof(arr) / sizeof(arr[0]);
    //int kolom = sizeof(arr[0]) / sizeof(arr[0][0]);
    
    //Algoritma
    printf("Masukkan ukuran baris: ");
    scanf("%d", &baris);

    printf("Masukkan ukuran kolom: ");
    scanf("%d", &kolom);

    arr = (int**)malloc(baris * sizeof(int*));
    for (i = 0; i < baris; i++){
        arr[i] = (int*)malloc(kolom * sizeof(int));
    }

    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            printf("Masukkan elemen baris %d: ", i+1);
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0;i<baris;i++){
        sum = 0;
        for(j=0;j<kolom;j++){
            sum += arr[i][j];
        }printf("Jumlah baris %d = %d\n",i+1,sum);
    }

    for(j=0;j<kolom;j++){
        sum = 0;
        for(i=0;i<baris;i++){
            sum += arr[i][j];
        }printf("Jumlah kolom %d = %d\n",j+1,sum);
}
}