#include <stdio.h>
#include <stdlib.h>

int main(){
    // * -> pega o valor
    // & -> pega o endereço que o ponteiro aponta

    //declarando um ponteiro: tipo * nome_ponteiro;

    int * ptr;
    int valor = 10;
    ptr = &valor;

    printf("o endereço valor = %x\n", &valor);
    printf("o endereço que do valor que é apontado pelo ponteiro = %x\n", ptr);
    printf("o endereço do ptr = %x\n", &ptr);
    printf("o valor dentro do ptr = %d\n", *ptr);
    printf("o valor = %d\n", valor);

    return EXIT_SUCCESS;
}