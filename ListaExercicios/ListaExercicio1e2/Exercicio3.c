#include <stdio.h>

//Temperatura

main(){

    float celsius, fahrenheit;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);


    fahrenheit = (9 * celsius + 160)/5;


    printf("\nA temperatura em Fahrenheit e de %.2f \n", fahrenheit);

}
