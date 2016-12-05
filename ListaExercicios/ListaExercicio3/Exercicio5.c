#include <stdio.h>
#include <stdlib.h>

void main() {
    int matricula, nota1, nota2, nota3;
    float mediafinal;

    do {
        printf("Informe uma matricula: ");
        scanf("%d", &matricula);

        if (matricula != 9999) {

            printf("Informe a primeira nota: ");
            scanf("%d", &nota1);

            printf("Informe a segunda nota: ");
            scanf("%d", &nota2);

            printf("Informe a terceira nota: ");
            scanf("%d", &nota3);

            mediafinal = ((2 * nota1) + (3 * nota2) + (4 * nota3)) / 9;

            if (mediafinal >= 5) {
                printf("Matricula: %d \n Media: %.2f \n Situacao: APROVADO\n", matricula, mediafinal);
            } else {
                printf("Matricula: %d \n Media: %.2f  \n Situacao: REPROVADO\n", matricula, mediafinal);
            }

        }

    } while (matricula != 9999);
}

