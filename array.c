#include <stdio.h>
#include <stdlib.h>

int encontrarMaior(int vet[], int tam){
        int maior = vet[0];
        for(int i = 1; i < tam; i++){
            if(vet[i] > maior){
                maior = vet[i];
            }
        }
    }

int main(){
    int v[5] = {1,2,3,4,5};
    int vet[5] = {20, 1, 10, 2, 3};
    int maior = encontrarMaior(vet, 10);
    printf("o terceiro elemento é: %d\n", v[2]);
    printf("o maior elemento é: %d", maior);
    
    return 0;
}