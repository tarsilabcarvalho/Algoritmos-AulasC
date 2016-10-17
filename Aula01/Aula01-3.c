#include <stdio.h>

//Conta
main(){
	
	int conta;
	float saldo, credito, debito;
	
	printf("Informe o numero da sua conta: ");
	scanf("%i", &conta);
	
	printf("Informe os creditos da sua conta: ");
	scanf("%f", &credito);
	
	printf("Informe os debitos da sua conta: ");
	scanf("%f", &debito);
	
	saldo = credito - debito;
	
	printf("O saldo atual da sua conta %i e %.2f", conta, saldo);	
	
}
