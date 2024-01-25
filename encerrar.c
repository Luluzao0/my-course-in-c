#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome[50];
    char *r = "LUISAO";
    for(int i = 0; i < 2; i++){
        printf("informe um nome aleatorio: ");
        scanf("%s", nome);

        if(strcmp(nome, r) == 0){
            printf("nome correto :) ");
            return 1;
        }
    }

    printf("\n\n END");
    return 0;
}
