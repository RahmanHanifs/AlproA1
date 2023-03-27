/* Nama File    		: JumPrimaFunct.c */
/* Deskripsi    		: Menampilkan dan menjumlahkan Bilangan Prima*/
/* Pembuat      		: Rahman Hanif aji Saputra - 24060122140128 */
/*Tanggal Pembuatan		: 25 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int prima(int N)
{
    //*kamus lokal
    int i,j,total,kos=0;
    //*Algoritma
    if (N<2){
        printf("Tidak ada Bilangan Prima, sehingga jumlahnya Sn = 0\n");
        }else{
    for (i = 2; i<=N; i++){
        total = 0;
            for (j = 2; j < i; j++)
            {if (i % j == 0)
                {total = 1;}
            }if (total == 0){
                printf("%d\n",i);
                kos += i;
            }
    }}
    return kos;
}
int main()
{
    int i,N,j;
    printf("Masukan bilangan N :");
    scanf("%d",&N);
    int kos = prima(N);
    printf("Jumlah deret Bilanganya Sn = %d",kos);
}