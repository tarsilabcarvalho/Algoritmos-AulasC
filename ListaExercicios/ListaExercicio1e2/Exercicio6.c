#include <stdio.h>

main(){

    float port, mat, conhger, media;
    char nome; //arrumar essa variavel

    printf("Insira o nome do candidato: ");
    scanf("%c", &nome);

    printf("Insira a nota da prova de Portugues: ");
    scanf("%f", &port);

    printf("Insira a nota da prova de Matematica: ");
    scanf("%f", &mat);

    printf("Insira a nota da prova de Conhecimentos Gerais: ");
    scanf("%f", &conhger);

    media = (port + mat + conhger)/3;

    printf("O candidato %c ficou com nota %.2f em Portugues, %.2f em Matematica e %.2f em Conhecimentos Gerais, portanto sua media e %.2f", nome, port, mat, conhger, media);

    if(media>= 7 && port>= 5 && mat>=5 && conhger>=5){

        printf("\n\nParabéns, o candidato foi aprovado");

    } else {

        printf("\n\nInfelizmente o candidato não foi aprovado");

    }

}
