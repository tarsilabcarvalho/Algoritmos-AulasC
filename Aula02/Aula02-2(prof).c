#include <stdio.h>
#define qtd_max 3;
main (){

    float nota, media;
    float somadasnotas = 0;
    int qtdnotas = 1;

    while (qtdnotas < 3){

        printf ("Insira a %i a. nota: ", qtdnotas);
        scanf("%f", &nota);

        somadasnotas = somadasnotas + nota;
        qtdnotas++;

    }

    media = somadasnotas/3;
    printf("A media e %.2f", media);

}
