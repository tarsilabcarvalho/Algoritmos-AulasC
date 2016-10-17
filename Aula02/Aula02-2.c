#include <stdio.h>
#define qtd_max 3
//Medias

main() {

    float nota, media;
    int qtdnotas = 0;
    float somadasnotas=0;

    while (qtdnotas < 3){

    printf ("Escreva a %i a. nota do aluno: ", (qtdnotas +1));
    scanf ("%f", &nota);

    somadasnotas = somadasnotas + nota;
    qtdnotas = qtdnotas + 1;

    }

    media = somadasnotas / 3;
    printf("A media e %.2f", media);


}
