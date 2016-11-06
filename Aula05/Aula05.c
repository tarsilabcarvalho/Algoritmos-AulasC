#include <stdio.h>

main(){

    int numero[6] = {12, 10, 7, 8, 3, 14};
    int soma;

    //duas maneiras de atribuir valor ao vetor
    //altera a posição 0 para o valor 25
    numero[0] = 25;


    soma = numero[3] + numero[4];
    printf("%i\n", numero[3]);
    printf("%i\n", numero[4]);


    printf("%i", soma);



}
