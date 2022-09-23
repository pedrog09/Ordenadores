#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

#define INI 0
#define MAX 100

void preencherVetor(int *, int, int, int);
void imprimirVetor(int *, int);
void verPares( int *, int, int *);
void pegarPar(int *, int*, int);


int main(){

    int tam, a;
    int *pv = NULL, *ppar = NULL;

    puts("Diga o tamanho do vetor:");
    scanf("%d", &tam);

    pv = malloc(tam * sizeof(int));

    preencherVetor(pv, tam, INI, MAX);
    puts("Segue o Vetor abaixo:");
    imprimirVetor(pv, tam);


  
    verPares(pv, tam, &a);


    ppar = malloc(a * sizeof(int));
    pegarPar(pv, ppar, tam);


    printf("Elemento par: %d\n", *(pv+0));
    printf("Endereço na memoria do elemento: %p\n", &(*(pv+0)));

}

void preencherVetor(int *p, int t, int ini, int mx){
    srand(time(NULL));
    for (int i=0; i<t; i++){
        *(p + i) = ini + rand() % mx;
    }
}

void imprimirVetor(int *p, int t){
    for (int k=0; k<t; k++){

        printf("[%p] : %d\n",p+k,*(p + k));
    }
}

void verPares( int *p1, int tam, int *ppares){

    *ppares = NULL;

    for(int i=0; i < tam; i++){
        if(!(*(p1 + i ) % 2)) *ppares = *ppares + 1;
    }
}

void pegarPar(int *p1, int *p2, int tam){
    
    int posicao = 0;
    for(int i=0; i<tam; i++){

        if(*(p1 + i) % 2){

            *(p2 + posicao) = *(p1 +i);
            posicao++;
        }
    }
}