#include <stdio.h>


//Exercicio6
main(){

    int conjunto[2] = {1, 2};
    int conjunto2[2] = {5, 6};
    int uniao[4];
    int contador;
    int i = 0;


    for (contador = 0; contador < 2; contador++) {
        uniao[i] = conjunto[contador];
        printf("%i", uniao[i]);
        i++;
    }

    for (contador = 0; contador < 2; contador++) {
        uniao[i] = conjunto2[contador];
        printf("%i", uniao[i]);
        i++;
    }


}
