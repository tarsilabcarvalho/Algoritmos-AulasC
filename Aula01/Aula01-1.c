#include <stdio.h>

//Sucessor e Antecessor
/* para comentário de várias linhas*/

main() {
	int n, a, s;
	printf("Escreva um número:");
	scanf("%d", &n); /*pode ser usado %d também para inteiro, em algumas versões tem que colocar &n (& faz referencia a valor da variavel), 
					%d precisa colocar tipo de texto como scan le como cadeia de caracteres, faz ele converter para inteiro*/
	a = n - 1;
	s = n + 1;
	printf("O antecessor do numero %d é %d \ne o sucessor é %d", n, a, s); 
	//%d é considerado indice, começa a contar no 0
	//para usar o % como parte do texto deve inserir '%'
}
