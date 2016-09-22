/*Faça um algoritmo e programe para criptografar um número inteiro de 0 até 9.
0 - A   3 - D   6 - G   9 - K
1 - B   4 - E   7 - Z
2 - C   5 - F   8 - Y*/

#include <stdio.h>

main (){

    int num;
    int auth = 1;
    char *letra;

    do {
        auth = 1;
        printf ("Insira um numero");
        scanf("%i", &num);

        if (num == 0) {
            letra = "A";
        } else if (num == 1) {
            letra = "B";
        } else if (num == 2){
            letra = "C";
        } else if (num == 3){
            letra = "D";
        } else if (num == 4){
            letra = "E";
        } else if (num == 5){
            letra = "F";
        } else if (num == 6){
            letra = "G";
        } else if (num == 7){
            letra = "Z";
        } else if (num == 8){
            letra = "Y";
        } else if (num == 9) {
            letra = "K";
        } else {
            printf("Digite um numero valido\n");
            auth = 0;
        }

        if (auth == 1) {
            printf("Numero criptografado: %c", letra[0]);
        }

    } while (auth == 0);




}


