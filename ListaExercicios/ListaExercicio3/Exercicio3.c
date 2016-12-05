
#include <stdio.h>
#include <stdlib.h>

void main() {

    //Faca um algoritmo que leia uma matriz mat 2 x 3 e imprima na tela a soma de todos os elementos da matriz mat.

    int mat[2][3] =  {
        {1,2,3},
        {1,2,3}
    };

    int linha, coluna, soma = 0;

    for (linha=0; linha < 2; linha++) {
        for (coluna=0; coluna < 3; coluna++) {
            printf("%d\n", mat[linha][coluna]);
            soma =+ mat[linha][coluna];
        }
    }

    printf("%d", soma);

}
