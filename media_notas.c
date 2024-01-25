#include <stdio.h>
#include <stdlib.h>

int main(){

    int n[3], i;
    float m, s;

    
    for(i = 0; i < 3; i++){
        printf("Informe os valores das notas do aluno: \n");
        scanf("%d", &n[i]);
    }

    s = n[0] + n[1] + n[2];
    m = ( s ) / 3;
    printf("a media é: %.f \n",m);
    if( m >= 7 ){
      printf("aluno aprovado com média maior ou igual a 7.");
    } else {
      printf("aluno terá que fazer reposição de nota, ou reprovado");
    }
}