

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *pa, int n);

int main() {

    int n;
    int *pv = NULL;


    printf("Entre tamanho desejado do vetor: ");
    scanf("%d", &n);
    printf("Entre os %d elementos do vetor:\n", n);

    pv = malloc (n * sizeof(int));

    for(int i = 0; i < n; i++) {
        int x = 0;
        scanf("%d", &x);
        *(pv + i) = x;
    }

    bubbleSort(pv, n);
    printf("\n\nVetor ordenado:\n");

    for(int i = 0; i < n; i++) {
        printf("%d\t", *(pv + i));
    }
    printf("\n");
    return 0;
}


void bubbleSort(int *pa, int n){

    for(int i = n-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(*(pa + j) > *(pa + (j+1))) {
                int x;
                x = *(pa + j); 
                *(pa + j) = *(pa + (j+1)); 
                *(pa +(j+1)) = x; //troca
            }       
        }
    }
}