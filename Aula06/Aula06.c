#include <stdio.h>

//Exercicio Matriz

main(){


    int m1[4][3];
    int x =0, y=0, v=10;

    for(x=0; x<=3; x++){

        y=0;

        for(y=0; y<=2; y++){

            m1[x][y] = v;
            v = v + 10;

            printf("%i\n", m1[x][y]);

        }
    }


}
