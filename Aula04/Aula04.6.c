#include <stdio.h>

main(){

    exercicio1();
    exercicio2();
    exercicio3();

}


exercicio1(){

    int cont;

    printf("====Numeros de 1 até 100====\n");

    for(cont=1; cont<=100; cont++){

        printf("%i\n", cont);

        }

}

exercicio2(){

    int cont;

    printf("====Numeros de 100 até 1====\n");

    for(cont=100; cont>=1; cont--){

            printf("%i\n", cont);
    }

}

exercicio3(){

    int cont;

    printf("====Numeros pares de 0 até 1000====\n");

    for(cont=0; cont<=1000; cont+=2){

        printf("%i\n", cont);

    }

}
