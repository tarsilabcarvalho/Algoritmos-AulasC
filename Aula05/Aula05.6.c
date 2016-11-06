#include <stdio.h>


//Exercicio3
main(){

    char letra[26] = {'a', 'b', 'c', 'd', 'e' , 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'x', 'w', 'y', 'z'};
    int contador;


    for (contador = 26; contador >= 0; contador--) {
        printf("%c\n", letra[contador]);
    }

}
