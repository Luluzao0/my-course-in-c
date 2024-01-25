#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // metodo realloc: ptr = realloc(ptr, newSize);

    int *ptr;
    int n, i;

    n = 5; 
    printf("numero de elementos do array: %d \n", n);

    ptr = (int*)calloc(n,sizeof(int));

    if( ptr == NULL ){
        printf("Memoria não alocada.");
        exit(0);
    } else {

        printf("Memoria alocada com suceso usando calloc. \n");

        for ( i = 0 ; i < n; i++){
            ptr[i] = i + 1;
        }
        
        printf("o numero de elementos do array é: ");
        for(i=0;i<n;i++){
            printf("%d, ", ptr[i]);
        }

        n = 10;

        printf("\n\n Novo valor do num de elemetos do array: %d \n", n);

        ptr = (int*)realloc(ptr, n * sizeof(int));

        printf("Memoria realocada com sucesso usando realloc.\n");

        for ( i = 0 ; i < n ; i++){
            ptr[i] = i + 1;
        }

        printf("O numero de elementos do array são: ");
        for(i = 0; i < n; i++){
            printf("%d, ", ptr[i]);
        }

        free(ptr);
        printf("Memoria limpa do ptr");
    }
        
    return 0;
}