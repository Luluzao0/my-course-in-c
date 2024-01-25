#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr, inverso;
    int n, i;

    printf("informe o tamanho do array: \n");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));
    
    if(ptr == NULL){
        printf("Memoria não alocada.");
        exit(0);
    } else {
        
        for(i = 0; i < n; i++){
            printf("informe os valores dentro dos arrays: \n");
            scanf("%d", &ptr[i]);
            
        }
        printf("memoria alocada com sucesso \n");
        
        for(i = n - 1; i >= 0; i--){
            inverso = ptr[i];
            printf("inverso: %d\n", inverso);
        }

        printf("deseja alterar o tamanho do array? Responder com 0(sim) e 1(não) \n");
        int ans;
        scanf("%d",&ans);
        if(ans == 1){
            printf("programa finalizado!  :) \n");
        } else{
            printf("para qual tamanho deseja alterar: \n");
            scanf("%d", &n);
            
            ptr = (int*)realloc(ptr, n * sizeof(int));
            printf("Memoria realocada com sucesso usando realloc.\n");


            printf("o tamanho do array é: %d \n", n);
        }
    
       
    }

    free(ptr);
    printf(" \n Memoria do ptr limpa\n");
    
    return 0;

}
