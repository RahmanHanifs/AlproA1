/* Nama File    		: SimetriTabel.c */
/* Deskripsi    		: melakukan cek apakah tabel T1 dan T2 simetri atau tidak */
/* Pembuat      		: Rahman Hanif aji Saputra - 24060122140128 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int i,n,p,sum;
    int *tabel1;
    int *tabel2;
    tabel1 = (int*)malloc(n*sizeof (int));
    tabel2 = (int*)malloc(n*sizeof (int));
    //Algoritma
    printf("masukkan panjang tabel : ");
    scanf("%d", &n);
    
    printf("masukkan panjang tabel : ");
    scanf("%d", &p);
    if(p==n){
    for(i=0;i<n;i++) {
    printf("masukkan nilai ke - %d : ",i);
    scanf("%d",&tabel1[i]);
    }
    for(i=0;i<n;i++) {
    printf("masukkan nilai ke - %d : ",i);
    scanf("%d",&tabel2[i]);
    }
        for(i=0;i<n;i++){
            sum = 0;
            if(tabel1[i]!=tabel2[i]){
                sum++;
        }}
            if(sum != 0){
                printf("Tidak Simetris");
            }else{
                printf("simetris");
        }}else{
            printf("tidak simetris");
        }
    free(tabel1);
    free(tabel2);
    }
    