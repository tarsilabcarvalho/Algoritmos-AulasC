#include <stdio.h>
#define qtd_max 3
//Medias

main() {

    float nota, media, soma = 0;
    int notas[2];
    int qtnotas = 0;
    int nota_atual = 0;

    while (qtnotas <= qtd_max -1) {
        printf ("Informe a nota do aluno ");
        scanf("%f", &nota);
        qtnotas = qtnotas + 1;
    }

    soma = soma + nota;


    }


