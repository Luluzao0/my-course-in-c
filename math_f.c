#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a = 5; 
    const float pi = 3.141592;
    float b; 
    int x = 3;
    int y = 4;

    b = (pi / 4);
    printf("o novo valor de a é: %f \n ", pow(a,3));
    printf("o valor da raiz quadrada de a é : %f \n", sqrt(a));
    printf("o valor da exponencial de a é: %f \n", exp(a));
    printf("o valor do cosseno de b é: %f \n ", cos(b));
    printf("o valor do seno de b é: %f \n", sin(b));
    printf("o valor do log de a é: %f \n", log(a));
    printf("o valor do log10 de a é: %f \n", log10(a));  
    printf("o valor da hipotenusa de x e y é: %f \n", hypot(x,y));
    printf("o maior valor de x e y é : %d\n ", fmax(x,y));

    printf("valor de a: %f", a);

    printf("\n\n END");
    return 0;
}