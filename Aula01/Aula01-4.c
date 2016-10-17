#include <stdio.h>
#define pi 3.14

//area do circulo


main (){

    float area, raio;

    printf ("Informe o raio da circunferência");
    scanf ("%f", &raio);

    area = (raio * raio) * pi;

    printf ("A area da circunferencia é %.2f", area);


}
