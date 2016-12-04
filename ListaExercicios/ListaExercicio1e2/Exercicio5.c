#include <stdio.h>

//Troca de Valores

main(){

    int a, b, atemp, btemp;

    printf("Informe um valor para 'A': ");
    scanf("%i", &a);

    printf("Informe um valor para 'B': ");
    scanf("%i", &b);

    atemp = a;
    btemp = b;
    a = btemp;
    b = atemp;

    printf("O valor de 'A' e %i e o valor de 'B' e %i", a, b);

}
