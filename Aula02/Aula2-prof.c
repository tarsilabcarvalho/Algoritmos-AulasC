#include <stdio.h>

main (){

    float nota, media;
    float somadasnotas = 0;
    int qtdnotas = 0;


    while (qtdnotas < 3){

    printf("Insira a %i a. nota: ", (qtdnotas + 1));
    scanf ("%f", &nota);

    somadasnotas = somadasnotas + nota;
    qtdnotas = qtdnotas + 1;


    }

    media = somadasnotas/3;
    printf("A media e %.2f", media);


}
