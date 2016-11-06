#include <stdio.h>


//Exercicio2
main(){
//repetir vetor
    char letra[26] = {'a', 'b', 'c', 'd', 'e' , 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'x', 'w', 'y', 'z'};
    char letra1[26];
    int contador;
    //char* letra1 = letra;

    for (contador = 0; contador < 26; contador++) {
        letra1[contador] = letra[contador]; //letra que corresponde ao contador na posição
        printf("%c\n", letra[contador]);
    }


    for (contador = 0; contador < 26; contador++) {
        letra1[contador] = letra[contador]; //letra que corresponde ao contador na posição
        printf("%c\n", letra1[contador]);
    }

}
