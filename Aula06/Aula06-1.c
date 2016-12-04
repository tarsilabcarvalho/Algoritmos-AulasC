#include <stdio.h>

//Exercicio Matriz

main(){


    int m1[4][3];
    int x =0, y=0, v=10, cont;

    for(x=0; x<=3; x++){

        y=0;

        for(y=0; y<=2; y++){

            m1[x][y] = v;
            v = v + 10;

           // printf("%i  ", m1[x][y]);

        }
    }



    for(x=0; x<=3; x++) {
        for (y = 0; y <= 2; y++) {
            printf("%i  ", m1[x][y]);
        }
        printf("\n");
    }

}
