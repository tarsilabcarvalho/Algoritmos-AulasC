#include <stdio.h>
//TABUADA

main(){

    int i;
    int j;

    for(i=0; i<=10; i++){

        printf("Tabuada do numero %i\n", i);

        //se eu quisesse começar do 1, era só declarar primeiro j=1
        for(j=0; j<=10; j++){

            printf("%i x %i = %i\n", i, j, (i*j));

        }

    }

}
