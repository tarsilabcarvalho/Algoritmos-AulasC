#include <stdio.h>

main(){

    int idade[40]; //vetor inteiro com 40 idades
    //char nome[30]; //char aceita somente um caractere, ou seja, serão inseridos 30 caracteres
    //float media[40];

    //int idade[40] = {2, 4, 17, 30, 0 ,40}; outro jeito de inserir, o resto fica 0
    //for(cont=0; cont<40; cont++){
 printf("Digite quatro notas: ");
    //printf ("%i", idade[2]); mostra o 17
    //}

    //para mostrar todos tem que ser printf ("%i", idade[cont]);


    idade[25] = 21; //tem que informar a posição
    idade[0] = 2;
    idade[39] = 34;
    idade[1] = 40;
    idade[2] = 17;
    idade[3] = 30;


    printf("Digite a idade");
    scanf("%i", idade[4]);
    printf("%i", idade[4]);

}
