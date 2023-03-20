/* Nama File    		: JumFrekNilTabel.c */
/* Deskripsi    		: menjumlahkan nilai elemen tabel T yang kemunculannya lebih dari 1 kali */
/* Pembuat      		: Rahman Hanif aji Saputra - 24060122140128 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int i, j, ukuran, kos, jumlah = 0, *Tabel;
    //Algoritma
    printf("Masukkan ukuran array: ");
    scanf("%d", &ukuran);

    Tabel = (int*)malloc(ukuran * sizeof(int));

    for (i = 0; i<ukuran; i++){
        scanf("%d", &Tabel[i]);
    }
    for (i = 0; i<ukuran; i++){
        kos = 0;
        for (j = 0 ; j < ukuran; j++){
            if (Tabel[i] == Tabel[j]){
                kos++;
            }
        }
        if (kos > 1){
            jumlah+=Tabel[i];
        }
    }
    printf("%d", jumlah);
    return 0;
}
