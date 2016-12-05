#include <stdio.h>
#include <stdlib.h>

void main() {

    //Faca um algoritmo para somar 3 matrizes.

    //Soma das matrizes
    int soma[3][3];

    //Matriz 1
    int matriz1[3][3] =  {
        {1,2,3},
        {1,1,1},
        {1,1,1}
    };

    //Matriz 2
    int matriz2[3][3] =  {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };

    //Matriz 3
    int matriz3[3][3] =  {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };

    int linha, coluna;

    for (linha=0; linha < 3; linha++) {
        for (coluna=0; coluna < 3; coluna++) {
            soma[linha][coluna] = matriz1[linha][coluna] + matriz2[linha][coluna] + matriz3[linha][coluna];
        }
    }

}
