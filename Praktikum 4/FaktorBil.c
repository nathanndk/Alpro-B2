/*Nama File	        : FaktorBil.c*/
/*Deskripsi	        : Menentukan faktor-faktor bilangan dari bilangan integer sembarang N */
/*Pembuat	        : Christian Joshua Nathanael Nadeak-24060121140120*/
/*Tanggal pembuatan	: 19-03-2022*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int N,i;

    printf("Ingin mencari faktor dari bilangan berapa? ");
    scanf("%d",&N);

    for(i=1; i<=N ;i++){
        if (N % i == 0){
            printf(" %d",i);
        }
    }
    return 0;
}
