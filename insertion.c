#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 15

int vetor[n];
void insertionSort(int vetor[]){
    int i,j,aux;

        for (int i=0; i<n; i++){
            printf("Digite o %d numero:", i+1);
            scanf("%d", &vetor[i]);
        }

        for (i = 1 ; i <= n - 1; i++){
                j = i;
        while (j > 0 && vetor[j-1] > vetor[j])
            {
                aux = vetor[j];
                vetor[j]= vetor[j-1];
                vetor[j-1] = aux;
                j--;
            }
    }
}
int main (){
    int count;
        insertionSort(vetor);
       for (count=0; count<n; count++){
        printf("%d \t", vetor[count]);
       }
    return 0;
}
