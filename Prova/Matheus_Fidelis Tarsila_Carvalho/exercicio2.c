#include <stdio.h>

main () {
	float x[9] = {15, 37, 14, 9, 10, 7, 2.8, 8, 9};
	float y[3] = {2, 5, 1};
	float distributiva[27];
	int contador;
	int contadorD;
	int i;
	
	for (contador; contador <= 8; contador++) {
		for (i = 0; i <= 2; i++) {
			distributiva[contadorD] = x[contador] * y[i];
			printf("%.2f\n", distributiva[contadorD]);
			contadorD++;
		}
	}	
}
