#include <stdio.h>
#include <stdlib.h>

void main() {
    int contador, contadorcoluna, somalinha3, primeiracoluna, diagonalprincipal, diagonalsecundaria, somamatriz;
    int matriz[4][4] =  {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };

    //Soma a linha 3
    for(contador=0;contador <= 3; contador++) {
        somalinha3 += matriz[3][contador];
        printf("%d\n", matriz[3][contador]);
    }

    printf("A Soma da linha 3 e: %d\n", somalinha3);

    //Soma a primeira coluna
    for(contador=0; contador <= 3; contador++) {
        printf("%d\n", matriz[contador][0]);
        primeiracoluna += matriz[contador][0];
    }

    printf("A Soma da primeira coluna e: %i\n", primeiracoluna);

    //Soma da diagonal principal
    for(contador=0; contador <= 3; contador++) {
        printf("%d\n", matriz[contador][contador]);
        diagonalprincipal += matriz[contador][contador];
    }

    printf("A Soma da diagonal e: %i\n", diagonalprincipal);

    //Soma da diagonal secundaria
    for(contador=3; contador >= 0; contador--) {
        printf("%d\n", matriz[contador][contador]);
        diagonalsecundaria += matriz[contador][contador];
    }

    printf("A Soma da diagonal secundaria e: %i\n", diagonalsecundaria);

    //Soma a matriz
    for(contador=3; contador >= 0; contador--) {
        for(contador2=3; contador >= 0; contador--) {
            somamatriz += matriz[contador2][contador];
        }
    }

}
