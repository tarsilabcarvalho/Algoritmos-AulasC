#include <stdio.h>
#define porca 3.15
#define parafuso 8.00
#define arruela 4.50

main(){
	
	char cliente;
	float totalcompra1, totalcompra2, descontoporca, descontoparafuso, descontoarruela, totaldesconto;
	int qtdadeporca, qtdadeparafuso, qtdadearruela;
	
	printf("Nome do cliente: ");
	scanf ("%c", &cliente);
	
	printf("Porca: ");
	scanf("%i", &qtdadeporca);
	
	printf("Parafuso: ");
	scanf("%i", &qtdadeparafuso);
	
	printf("Arruela: ");
	scanf("%i", &qtdadearruela);
	
	totalcompra1 = (qtdadeporca * porca) + (qtdadeparafuso * parafuso) + (qtdadearruela * arruela);
	
	descontoporca = (qtdadeporca * porca)/100 * 10;
	
	descontoparafuso = (qtdadeparafuso * parafuso)/100 *20;
	
	descontoarruela = (qtdadearruela * arruela)/100 * 30;
	
	totaldesconto = descontoporca + descontoparafuso + descontoarruela;
	
	totalcompra2 = totalcompra1 - totaldesconto;
	
	printf("Nome: %c\n", cliente);
	
	printf("Porcas compradas: %i\n", qtdadeporca);
	
	printf("Parafusos comprados: %i\n", qtdadeparafuso);
	
	printf("Arruelas compradas: %i\n", qtdadearruela);
	
	printf("Total de Desconto: %.2f\n", totaldesconto);
	
	printf ("Total da compra: %.2f\n", totalcompra2);
	
	
}
