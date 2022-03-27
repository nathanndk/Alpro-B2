//Nama File     : CekPrima.c //
//Nama Pembuat  : Christian Joshua Nathanael Nadeak //
//Tanggal       : 27 Maret 2022 //
//Deskripsi     : Menentukan apakah masukan dari sebuah bilangan sembarang N termasuk prima atau bukan //

#include<stdio.h>
#include<stdlib.h>

int main(void){
    // Kamus
    int N,i,counter;

    // Algoritma
    printf("Program Cek Prima\n");
    printf("\n");
    printf("Masukan bilangan : ");
    scanf("%d",&N);
    if(N<=2) {
        if(N <= 1){
            printf("Masukan tidak valid");
        } else {
            printf("%d adalah bilangan prima \n",N);
        }
    } else {
        for(i=2;i<N;i++){
            if(N%i==0){
                counter = 0;
                break;
            } else {
                counter = 1;
            }
        }
        if(counter==0){
            printf("%d adalah bukan bilangan prima \n",N);
            } else {
            printf("%d adalah bilangan prima \n",N);
        }
    }
    return 0;
}
