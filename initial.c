#include <stdio.h>
#include <stdlib.h>

int main(){


    int a, b, c, soma, sub, mult; // int significa inteiros.
    float med; // float significa real

    printf("Informe o primeiro valor: \n");
    scanf("%d", &a);
    printf("Informe o segundo valor: \n");
    scanf("%d", &b);
    printf("Informe o terceiro valor: \n");
    scanf("%d", &c);


    soma = a + b + c;
    sub = a - b - c;
    mult = a * b * c;
    med = (soma) / 3;



    

    printf("valor da soma é %d, da subtração é %d, da multiplicação é: %d ! \n", soma, sub, mult);    
    printf("media é: %.2f ", med); // .2f ajusta a casa decimal.
    printf("\n\n END");

    return 0;
}
