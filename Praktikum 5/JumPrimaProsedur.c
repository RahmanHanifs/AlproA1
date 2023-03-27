/* Nama File    		: JumPrimaProsedur.c */
/* Deskripsi    		: Menampilkan dan menjumlahkan Bilangan Prima*/
/* Pembuat      		: Rahman Hanif aji Saputra - 24060122140128 */
/*Tanggal Pembuatan		: 25 Maret 2023 */
#include <stdio.h>
#include <stdio.h>

void prima(int N)
{

    //*kamus lokal
    int i,j,total,kos=0;
    //*Algoritma
    for (i = 2; i<=N; i++){
        total = 0;
            for (j = 2; j < i; j++)
            {if (i % j == 0)
                {total = 1;}
            }if (total == 0){
                printf("%d\n",i);
                kos += i;
            }
    }
    printf("Jumlah deret Bilanganya Sn = ");
    printf("%d",kos);
}
int main()
{
    int i,N,j;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    if (N < 2){
        printf("Input harus positif");   
    }
    else{
        (prima(N));
    }
}