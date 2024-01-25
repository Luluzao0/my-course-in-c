#include <stdio.h>
#include <stdlib.h>

int main(){

    int r;
    float c;
    const float pi = 3.14;

    printf("informe o valor do raio: \n");
    scanf("%d", &r);

    if(r < 3 && r >= 6){
        r = 5;
    }

    c = 2 * pi * r;

    printf("o valor do comprimento de uma circunferencia é: %.4f", c);






}