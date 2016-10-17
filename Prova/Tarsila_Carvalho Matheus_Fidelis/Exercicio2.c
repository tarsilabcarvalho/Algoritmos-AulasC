#include <stdio.h>
//Exercicio 2 
main () {
	int opcao;
	int num1, num2, total;
	int resposta; 
	int flag = 0;
	
	while (flag == 0) {

		printf("======== MENU ========\n");
		printf("[1] SOMA\n");
		printf("[2] SUBTRACAO\n");
		printf("[3] DIVISAO\n");
		printf("[4] MULTIPLICACAO\n");
		printf("[5] COMPARA\n");
		
		printf("Escolha uma opcao: ");
		scanf("%i", &opcao);
		
		printf("Insira um numero: \n");
		scanf("%i", &num1);
		
		printf("Insira outro numero: \n");
		scanf("%i", &num2);
		
		if (opcao == 1) { //Soma
			total = num1 + num2;
			printf("Resultado da Soma: %i\n", total);
		} else if (opcao == 2) { //Subtracao
			total = num1 - num2;
			printf("Resultado da Subtracao: %i\n", total);
		} else if (opcao == 3) { //Divisão
			if (num1 == 0 || num2 ==0) {
				printf("Não é possível realizar a divisão por zero");
			} else {
				total = num1 / num2;
				printf("Resultado da Divisão: %i\n", total);
			}
		} else if (opcao == 4) { //Multiplicação
			total = num1 * num2;
			printf("Resultado da multiplicacao: %i\n", total);
		} else if (opcao == 5) { //Comparacao
			if (num1 == num2) {
				printf("Os numeros sao iguais\n");
			} else if (num1 > num2) {
				printf("O numero %i é o maior\n", num1);
			} else {
				printf("O numero %i é o maior\n", num2);
			}
		}
		
		printf("Deseja continuar? 1 - Sim 2- Nao\n");
		scanf("%i", &resposta);
		
		if (resposta == 1) {
			flag = 0;
		} else if (resposta == 2) {
			printf("Ate mais, voce escolheu sair\n");
			flag = 1;
			//return 0;
		}
	}
}
