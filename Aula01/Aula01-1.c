#include <stdio.h>

//Sucessor e Antecessor
/* para coment�rio de v�rias linhas*/

main() {
	int n, a, s;
	printf("Escreva um n�mero:");
	scanf("%d", &n); /*pode ser usado %d tamb�m para inteiro, em algumas vers�es tem que colocar &n (& faz referencia a valor da variavel), 
					%d precisa colocar tipo de texto como scan le como cadeia de caracteres, faz ele converter para inteiro*/
	a = n - 1;
	s = n + 1;
	printf("O antecessor do numero %d � %d \ne o sucessor � %d", n, a, s); 
	//%d � considerado indice, come�a a contar no 0
	//para usar o % como parte do texto deve inserir '%'
}
