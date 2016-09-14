#include <stdio.h>

//Medias

main() {

    float n1, n2, media;

    printf ("Informe a primeira nota do aluno ");
	scanf("%f", &n1);

	printf ("Informe a segunda nota do aluno ");
	scanf("%f", &n2);

    media = (n1+n2)/2;


    if (media < 6){
    printf("O aluno ficou com media %f e conceito I, então está reprovado", media);
    } else if (media <= 7.9){
    printf ("O aluno ficou media %f e conceito R, então está aprovado", media);
    } else if (media <= 8.9){
    printf ("O aluno ficou media %f e conceito B, então está aprovado", media);
    } else {
    printf ("O aluno ficou media %f e conceito MB, então está aprovado", media);
    }

    }
