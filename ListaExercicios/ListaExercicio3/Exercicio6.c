#include <stdio.h>
#include <stdlib.h>
#define maximo 15

void main() {

    int contador, numandares, numpessoas, pessoasentrando, pessoassaindo;

    printf("Informe o numero de andares do predio: ");
    scanf("%i", &numandares);

    for (contador = 0; contador < numandares; contador++) {
        printf("Numero de pessoas entrando ");
        scanf("%d", &pessoasentrando);

        printf("Numero de pessoas saindo ");
        scanf("%d", &pessoassaindo);

        numpessoas = ((numpessoas + pessoasentrando) - pessoassaindo);

        if (numpessoas > maximo) {
            printf("Numero maximo de pessoas excedido, devem sair %d pessoas", (numpessoas - maximo));
            do {

                printf("Numero de pessoas saindo ");
                scanf("%d", &pessoassaindo);

            } while (numpessoas >= maximo);
        }

    }

    printf("%d PESSOAS DEVEM DESCER", numpessoas);
}


