#include <stdio.h>

main(){

    int g[13] ={1, 3, 1, 2, 1, 2, 2, 1, 3, 2, 1, 2, 3};
    int r[13], contador, corretas;

    for (contador = 0; contador < 13; contador++){
        printf("Insira sua resposta: ");
        scanf("%i", &r[contador]);
    }

    for (contador = 0; contador < 13; contador++){
        if (g[contador] == r[contador]) {
            corretas++;
        }
    }

     for (contador = 0; contador < 13; contador++){
        printf("Seus numeros sao: %i\n", r[contador]);
    }

    if (corretas == 13) {
        printf("GANHADOR, PARABENS! VOCE ACERTOU 13 POSIÇOES");
    } else {
        printf("PERDEU, VOCE ACERTOU APENAS %i", corretas);
    }

}
