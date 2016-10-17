#include <stdio.h>
//Exercício 1 - Tabuada 
main(){
	
	int valor_max_tabuada = 10;
	int valores_multiplicacao = 10;
	int count_tabuada  = 0;
	int count_valores = 0;
	int resultado;
	
	while (count_tabuada < valor_max_tabuada) {
		count_tabuada++;
		printf("===== TABUADA DO %i =====\n", count_tabuada);
		
		do {
			printf("| %i x %i = %i |\n", count_tabuada, count_valores + 1, (count_tabuada * (count_valores + 1)));
			count_valores++;
		} while (count_valores < valor_max_tabuada);
		printf("\n");
		count_valores = 0;
	}
}