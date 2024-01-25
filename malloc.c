#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[9] = {40, 55, 63, 17, 22, 68, 89, 97, 89}; 
    

    // tamanho desse array = 9
    // primeiro indice = 0
    // o ultimo indice = 8
    //ptr = (cast-type*) malloc(byte-size) 


    int *ptr;
    int n,i;

    printf("Informe o numero de elementos: ");
    scanf("%d", &n);
    printf("o numero informado foi: %d \n", n);

    ptr = (int*)malloc(n * sizeof(int));

    if ( ptr == NULL ){
        printf("Memoria não alocada. \n");
        exit(0);
    }
    else{
        printf("Memoria alocada. \n");
    
        for ( i = 0; i < n ; i++){
            ptr[i] = i + 1;
        }

        printf("Os elementos desse array são: ");
        for(i = 0 ; i < n ; i++){
            printf("%d", ptr[i]);
        }
    }
}