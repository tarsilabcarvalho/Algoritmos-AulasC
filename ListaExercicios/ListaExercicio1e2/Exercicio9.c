#include <stdio.h>
#define picole1 0.50
#define picole2 0.60
#define picole3 0.75

main(){

    int qtdadepicole1, qtdadepicole2, qtdadepicole3;
    float totalpicole1, totalpicole2, totalpicole3, totalgeral;

    printf("Quantidade vendida de Picole do Tipo 1: ");
    scanf("%i", &qtdadepicole1);

    printf("Quantidade vendida de Picole do Tipo 2: ");
    scanf("%i", &qtdadepicole2);

    printf("Quantidade vendida de Picole do Tipo 3: ");
    scanf("%i", &qtdadepicole3);

    totalpicole1 = qtdadepicole1 * picole1;
    totalpicole2 = qtdadepicole2 * picole2;
    totalpicole3 = qtdadepicole3 * picole3;
    totalgeral = totalpicole1 + totalpicole2 + totalpicole3;

    printf("Total de Picole do Tipo 1 vendidos: %i \n", qtdadepicole1);
    printf("Valor total arrecado na venda do Picole do Tipo 1: %.2f\n", totalpicole1);

    printf("Total de Picole do Tipo 2 vendidos: %i \n", qtdadepicole2);
    printf("Valor total arrecado na venda do Picole do Tipo 2: %.2f\n", totalpicole2);

    printf("Total de Picole do Tipo 3 vendidos: %i \n", qtdadepicole3);
    printf("Valor total arrecado na venda do Picole do Tipo 3: %.2f\n", totalpicole3);

    printf("Total Geral de Vendas: %.2f", totalgeral);

}
