#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int i;
    float n1,n2, s, su, m, div;

    printf("\n ---- Bem-vindo a calculadora do Luisao :)  ---- \n ");
    
    printf("Informe o primeiro valor: \n");
    scanf("%f", &n1);
    
    printf("Informe o segundo valor: \n");
    scanf("%f", &n2);

    printf("os valores são: %.4f e %.4f \n", n1, n2);
    
    
    //operações
    s = n1 + n2;
    su = n1 - n2;
    m = n1 * n2;
    div = n1 / n2; 

    printf("soma e: %.4f \n", s);
    printf("subtração e: %.4f \n",su);
    printf("multiplicação e: %.4f \n",m);
    printf("divisão e: %.4f \n", div);



    printf("\n END \n");
    return 0;

    

}
