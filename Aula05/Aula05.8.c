#include <stdio.h>


//Exercicio5
main(){

    int numero[5] = {1, 5, 10, 15, 20};
    int numero2[5] = {2, 4, 6, 8, 10};
    int resultado[5];
    int contador, soma;


    for (contador = 0; contador < 5; contador++) {
        resultado[contador] = numero[contador] + numero2[contador];
        printf("%i\n", resultado[contador]);
    }

}
