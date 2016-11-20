#include <stdio.h>

main(){

    float venda, totalvendas, comissao;
    char vendedor; 
	int contador = 0;

   do{
    	
    	printf("\nInforme o nome do vendedor: ");
    	scanf("%s", &vendedor);
        	
    	printf("\nInforme o valor de vendas desse vendedor: ");
    	scanf("%f", &venda);
    	
    	totalvendas = totalvendas + venda;
    	
    	if (venda > 50000){
    			comissao = venda/100 * 12;
			} else if (venda <= 50000 && venda >= 30000){
				comissao = venda/100 * 9.5;
			} else {
				comissao = venda/100 * 7;
			}
    	 	
    	printf("\nVendedor: %c\n", vendedor);
    	printf("\nValor de venda: %.2f\n", venda);			
    	
		printf("\nComissao: %.2f", comissao);	
	
	contador++;
			
	}  while (contador < 3);
	
	printf("O total de vendas é: %.2f", totalvendas);

}
