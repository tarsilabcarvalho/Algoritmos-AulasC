#include <stdio.h>

//Faça um programa que imprima os numeros pares de 0 até 1000

main(){

    int cont;
    //professora só alterou o cont pata cont+=2, que conta de 2 em 2, o operador pode ser trocado

    for(cont=0; cont<=1000; cont++){



        if (cont%2 == 0) {

            printf("%i\n", cont);

        }

    }

}
