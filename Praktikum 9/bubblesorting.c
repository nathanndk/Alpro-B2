// Nama : Arya Dheffan S
// NIM : 24060121140160
// Kelas : B2
// Deskripsi : Mengurutkan data dengan bubble sort
//----------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

void bubblesorting(int T[], int N){
    // Kamus Lokal
    int i, j, temp;
    // Algoritma
    for (i = 0; i < N; i++){
        for (j = i+1; j < N; j++){
            if (T[i] > T[j]){
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }
        }
    }
}

int main(){
    // Kamus
    int array[100], n, i, j;
    // Algoritma
    printf("Input the number of elements: ");
    scanf("%d", &n);
    printf("Input the elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    bubblesorting(array, n);
    printf("Sorted list: ");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
