#include <stdio.h>

main(){

    float nota[4];
    float media, somanota;
    int i;


    for(i=0; i<4; i++){

        printf("Digite as notas: ");

        scanf("%f", &nota[i]);

        somanota = somanota + nota[i];

    }

    media = somanota/4;

    printf("A media e: %.2f", media);


}
