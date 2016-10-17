/*Faça um programa que receba 10 numeros e mostre o maior e o menor número*/

#include <stdio.h>

main (){

    int num;
    int maior = 0;
    int menor;
    int qtdnum = 0;

    while (qtdnum < 10){

        printf ("Insira um numero: ");
        scanf ("%i", &num);
        printf ("\nNumero inserido: %i \n", num);

        if (menor == 0) {
            menor = num;
        }


        qtdnum = qtdnum + 1;


        if (num < menor){
        menor = num;
        } else if (num > maior){
        maior = num;
        }

    }

    printf ("O maior numero e %i e o menor %i", maior, menor);

}
