#include <stdio.h>

main(){


    float num1, num2, resultado;
    int operacao;

    printf("======Menu======");
    printf ("\n[1] Soma \n [2] Subtracao \n [3] Divisao \n [4] Multiplicacao \n [5] Compara \n");

    printf("Digite um numero: ");
    scanf ("%f", &num1);

    printf("Digite um numero: ");
    scanf ("%f", &num2);

    printf("Digite a operacao: ");
    scanf("%i", &operacao);


    if(operacao == 1){

        resultado = num1 + num2;
        printf("A soma e: %f", resultado);

    } else if(operacao == 2){

        resultado = num1 - num2;
        printf("A subtracao e: %f", resultado);

    } else if(operacao == 3){


            if(num2 == 0){

            printf("Nao e possivel dividir por zero")

            } else {

            resultado = num1/num2;
            printf("A divisao e: %f", resultado);

            }

        } else if(operacao == 4){

        resultado = num1 * num2;
        printf("A multiplicacao e: %f", resultado);

        } else if(operacao == 5){

            if(num1 == num2){

            printf("Os numeros sao iguais");

            } else if (num1 > num2){

            printf("O numero ")
            }


        }
}
