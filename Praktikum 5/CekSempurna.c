//Nama File     : CekSempurna.c//
//Nama Pembuat  : Christian Joshua Nathanael Nadeak //
//Tanggal       : 27 Maret 2022 //
//Deskripsi     : Menentukan apakah masukan dari sebuah bilangan sembarang N adalah bilangan sempurna, yakni jumlah faktor bilangan N (kecuali bilangan itu) sama dengan bilangan itu sendiri//

#include<stdlib.h>
#include<stdio.h>

int main(void){
    // Kamus
    int N,i,counter;

    //algoritma
    counter = 0;
    printf("Program Cek Sempurna\n");
    printf("\n");
    printf("Masukan bilangan : ");
    scanf("%d",&N);
    if(N>0){
        for(i=1;i<=N;i++) {
        if(N % i == 0) {
            counter = counter +i;
            }
        }
        if(counter-N == N) {
            printf("Bilangan sempurna");
            } else {
            printf("Bukan bilangan sempurna");
        }
    } else {
        printf("Masukan tidak boleh kurang dari 0");
    }
    return 0;
}
