#include <stdio.h>

main(){

    float volume, raio, altura;

    printf("Informe o raio da lata de oleo: ");
    scanf("%f", &raio);

    printf("Informe a altura da lata de oleo: ");
    scanf("%f", &altura);

    volume = 3.14159 * (raio * raio) * altura;

    printf("O volume da lata de oleo e de %.2f litros", volume);

}
