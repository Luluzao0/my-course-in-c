#include <stdio.h>
#include <stdlib.h>

int main(){

    // declarando a função calloc: ptr = (cast-type*)calloc(n, element-size), n -> num de elementos e element-size -> o tamanho de cada elemento


    int *ptr;
    int n,i;
    
    n = 1000;
    printf("informe o numero de elementos: %d\n ", n);

    //alocando dinamicamente usando calloc.
    ptr = (int*)calloc(n, sizeof(int));

    if(ptr == NULL){
        printf("Memoria não alocada. \n");
        exit(0);
    } else{

        printf("Memoria alocada. \n");
        
        for(i = 0; i < n ; i++){
            ptr[i] = i + 1;
        }

        printf("O num de elementos do array: ");
        for(i = 0; i < n; i++){
            printf("%d, ", ptr[i]);
        }
    }

    return 0;
}