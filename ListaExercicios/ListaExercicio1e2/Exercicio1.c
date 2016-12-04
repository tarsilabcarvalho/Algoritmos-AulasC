#include <stdio.h>
#define pi 3.14159

//Area da circunferencia

main(){

    float raio, area;

    printf("Informe o raio da circunferencia: ");
    scanf("%f", &raio);


    area = (raio * raio) * pi;


    printf("A area da circunferencia e: %.2f", area);


}
