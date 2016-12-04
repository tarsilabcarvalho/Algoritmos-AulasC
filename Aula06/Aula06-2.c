#include <stdio.h>

main(){

    char velha[3][3];
    char opcoes[2] = {'X', 'O'};
    int linha, coluna, cont, x, y;

    //Inicializa os caracteres default nos campos nao escolhidos
    for (x = 0; x <= 2; x++) {
        y=0;

        for(y=0; y<=2; y++){
            velha[x][y] = '-';
        }
    }
    //Loop infinito
    while (1 == 1) {
        //Mostra todos os itens do vetor
        for (x = 0; x <= 2; x++) {
            y=0;

            for(y=0; y<=2; y++){
                printf("%c ", velha[x][y]);
            }
            printf("\n");
        }

        printf("\n\n");

        //Garante que sempre sera um jogador diferente
        if (cont == 0) {
            cont = 1;
        } else {
            cont = 0;
        }

        printf("Agora e a vez do %c\n", opcoes[cont]);

        printf("Insira a coluna: ");
        scanf("%i", &coluna);

        printf("Insira a linha: ");
        scanf("%i", &linha);
        printf("\n\n");
        //Vetor do joga da velha, com as posicoes correspondentes
        //Recebe o valor x ou o, dependendo da vez do jogador
        velha[linha][coluna] = opcoes[cont];

    }


}
