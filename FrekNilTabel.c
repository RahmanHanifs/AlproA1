/* Nama File    		: FrekNilTabel.c */
/* Deskripsi    		: menampilkan nilai elemen tabel T yang kemunculannya lebih dari 1 kali */
/* Pembuat      		: Rahman Hanif aji Saputra - 24060122140128 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus 
    int i, j, ukuran, kos, *Tabel;
    // ALgoritma
    printf("Masukkan ukuran : ");
    scanf("%d", &ukuran);

    Tabel = (int*)malloc(ukuran * sizeof(int));

    for (i = 0; i<ukuran; i++){
        scanf("%d", &Tabel[i]);
    }

    for (i = 0; i<ukuran; i++){
        kos = 0;
        for (j = 0; j < ukuran; j++){
            if (i == j){
                break;
            }
            else{
                if (Tabel[i] == Tabel[j]){
                kos += 1;
                }
            }
        }
        if (kos == 1){
            printf("frekuensi yang muncul lagi : %d\n", Tabel[i]);
        }
    }
    return 0;
}
