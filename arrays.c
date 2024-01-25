#include <stdio.h>
#include <stdlib.h>

int main(){
    // declarando um array:  tipo nome_array[ tamanho_array ];

    //unidi
    float notas[4];
    float notas1[4] = {6, 6, 7, 6};
    float notas2[] = {6, 6, 7, 6}; 

    //atribuindo um valor a um array inicializado
    // notas[0] = {8.0};


    int i;

    for(i = 0; i<4; i++){
        printf("Nota %d = %4.2f \n", i + 1, notas1[i] );
    }

    return 0;



}