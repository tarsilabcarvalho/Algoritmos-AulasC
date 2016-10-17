/*Faça um algoritmo e programe para criptografar um número inteiro de 0 até 9.
0 - A   3 - D   6 - G   9 - K
1 - B   4 - E   7 - Z
2 - C   5 - F   8 - Y*/

#include <stdio.h>

main (){

    int num;

    do {
        printf ("Insira um numero");
        scanf("%i", &num);

        if (num == 0) {
            printf ("A");
        } else if (num == 1) {
            printf ("B");
        } else if (num == 2){
            printf ("C");
        } else if (num == 3){
            printf ("D");
        } else if (num == 4){
            printf ("E");
        } else if (num == 5){
            printf ("F");
        } else if (num == 6){
            printf ("G");
        } else if (num == 7){
            printf ("Z");
        } else if (num == 8){
            printf ("Y");
        } else if (num == 9) {
            printf ("K");
        } else {
            printf("Digite um numero valido");
        }

       } while (num >= 0 || num <= 9);




}


