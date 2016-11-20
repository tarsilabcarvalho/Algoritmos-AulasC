#include <stdio.h>

main(){

    int n[20], n1[20];
    int contador, fim, inicio;

    for (contador = 0; contador < 20; contador++){
        printf("Insira um numero: ");
        scanf("%i", &n[contador]);
        n1[contador] = n[contador];
    }

    for (contador = 0; contador < 20; contador++){
        printf("%i\n", n[contador]);
    }

    fim = 19;
    inicio = 0;

    for (contador = 0; contador < 10; contador++) {
        n[fim] = n1[inicio];
        n[inicio] = n1[fim];
        fim--;
        inicio++;
    }

    printf("\n\n\n\n\n", n[contador]);

    for (contador = 0; contador < 20; contador++){
        printf("%i\n", n[contador]);
    }


}
