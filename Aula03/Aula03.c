#include <stdio.h>

main (){

    float nota;

    do {
        printf ("Insira a nota correta");
        scanf ("%f", &nota);
    } while (!(nota >= 0 && nota <= 10));
}
