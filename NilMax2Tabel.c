/* Nama File    		: NilMax2Tabel.c */
/* Deskripsi    		: menampilkan nilai maksimum ke-2 dari tabel T yang sudah terdefinisi */
/* Pembuat      		: Rahman Hanif aji Saputra - 24060122140128 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main() { 
    //Kamus
    int max1 = 0, max2 = 0,n,i,*tabel; 
    //Agoritma
    printf("masukkan panjang tabel : ");
    scanf("%d", &n);

    tabel = (int*)malloc(n* sizeof(int));
    
    for(i=0;i<n;i++) {
    printf("masukkan nilai ke - %d : ",i);
    scanf("%d",&tabel[i]);
    } 
    
    for(int i = 0; i < n; i++) {
        if(tabel[i] > max1) { 
            max2 = max1; 
            max1 = tabel[i]; 
        }
        else if(tabel[i] > max2 && tabel[i] < max1) { 
            max2 = tabel[i];
        }
    }
    printf("Nilai maksimum ke-2 adalah %d", max2);
}