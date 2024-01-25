#include <stdio.h>
#include <stdlib.h>

int main(){

    int * ptr, * ptr1;
    int n, i;

    n = 5;
    printf("informe a quantidade de elementos do array: %d \n", n);

    //usando malloc e calloc
    ptr = (int*)malloc(n * sizeof(int));

    ptr1 = (int*)calloc(n, sizeof(int));


    if( ptr == NULL || ptr1 == NULL){
        printf("Memoria não alocada");
    } else{
        printf("Memoria alocada com sucesso usando malloc. \n");
        
        free(ptr); //usando a função free para "limpar" o local da memoria
        printf("Memoria Malloc liberada com sucesso. \n");

        printf("Memoria alocada com sucesso usando calloc. \n");
        free(ptr1);
        printf("Mmemoria Calloc liberada com sucesso. \n");
    }

    return 0;
}