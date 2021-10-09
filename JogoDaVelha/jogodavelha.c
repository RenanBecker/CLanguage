#include <stdio.h>
#include <cs50.h>


int main(void)
{
    char jogoVelha[3][3];

    printf("Jogador 1 = X\n");
    printf("Jogador 2 = O\n");

    bool ganhou = false;
    int jogada = 1;
    char sinal = '_';
    int linha = 0, coluna = 0;

    for (int i = 0; i<3; i++) {//preenche as casas do jogo
     	for(int j = 0;j<3; j++ ) { //com vazio para ficar visivel
     		jogoVelha[i][j] = sinal;
     	}
    }

    while (!ganhou){

            if (jogada % 2 == 1){ //jogador 1

                printf("Vez do jogador 1. Escolha linha e coluna (1-3).\n");
                sinal = 'X';
            } else {

                printf("Vez do jogador 2. Escolha linha e coluna (1-3).\n");
                sinal = 'O';
            }

            bool linhaValida = false;
            while (!linhaValida){
                linha = get_int("Entre com a linha (1, 2 ou 3)\n");
                if (linha >=1 && linha<=3){
                    linhaValida = true;
                } else {
                    printf("Entrada inválida, tente novamente\n");
                }
            }

            bool colunaValida = false;
            while (!colunaValida){
                coluna = get_int("Entre com a coluna (1, 2 ou 3)\n");
                if (coluna >=1 && coluna<=3){
                    colunaValida = true;
                } else {
                    printf("Entrada inválida, tente novamente\n");
                }
            }

            linha--;
            coluna--;
            if (jogoVelha[linha][coluna] == 'X' || jogoVelha[linha][coluna] == 'O'){
                printf("Posição já usada, tente novamente\n");
            } else { //jogada válida
                jogoVelha[linha][coluna] = sinal;
                jogada++;
            }

            //imprimir tabuleiro
            for (int i=0; i<3; i++){
                for (int j=0;j<3; j++){
                    printf("%c",jogoVelha[i][j]);
                    printf(" | ");
                }
            printf("\n");
            }


            //verifica se tem ganhador
            if ((jogoVelha[0][0] == 'X' && jogoVelha[0][1] == 'X' && jogoVelha[0][2] == 'X') ||     //linha 1
                    (jogoVelha[1][0] == 'X' && jogoVelha[1][1] == 'X' && jogoVelha[1][2] == 'X') || //linha 2
                    (jogoVelha[2][0] == 'X' && jogoVelha[2][1] == 'X' && jogoVelha[2][2] == 'X') || //linha 3
                    (jogoVelha[0][0] == 'X' && jogoVelha[1][0] == 'X' && jogoVelha[2][0] == 'X') || //coluna 1
                    (jogoVelha[0][1] == 'X' && jogoVelha[1][1] == 'X' && jogoVelha[2][1] == 'X') || //coluna 2
                    (jogoVelha[0][2] == 'X' && jogoVelha[1][2] == 'X' && jogoVelha[2][2] == 'X') || //coluna 3
                    (jogoVelha[0][0] == 'X' && jogoVelha[1][1] == 'X' && jogoVelha[2][2] == 'X') || //diagonal
                    (jogoVelha[0][2] == 'X' && jogoVelha[1][1] == 'X' && jogoVelha[2][0] == 'X')){  //diagonal inversa
                ganhou = true;
                printf("Parabéns, jogador 1 ganhou!\n");
            } else if ((jogoVelha[0][0] == 'O' && jogoVelha[0][1] == 'O' && jogoVelha[0][2] == 'O') ||     //linha 1
                    (jogoVelha[1][0] == 'O' && jogoVelha[1][1] == 'O' && jogoVelha[1][2] == 'O') || //linha 2
                    (jogoVelha[2][0] == 'O' && jogoVelha[2][1] == 'O' && jogoVelha[2][2] == 'O') || //linha 3
                    (jogoVelha[0][0] == 'O' && jogoVelha[1][0] == 'O' && jogoVelha[2][0] == 'O') || //coluna 1
                    (jogoVelha[0][1] == 'O' && jogoVelha[1][1] == 'O' && jogoVelha[2][1] == 'O') || //coluna 2
                    (jogoVelha[0][2] == 'O' && jogoVelha[1][2] == 'O' && jogoVelha[2][2] == 'O') || //coluna 3
                    (jogoVelha[0][0] == 'O' && jogoVelha[1][1] == 'O' && jogoVelha[2][2] == 'O') || //diagonal
                    (jogoVelha[0][2] == 'O' && jogoVelha[1][1] == 'O' && jogoVelha[2][0] == 'O')){  //diagonal inversa
                ganhou = true;
                printf("Parabéns, jogador 2 ganhou!\n");
            } else if (jogada > 9){
                ganhou = true;
                printf("Ninguém ganhou essa partida.\n");
            }
        }
}
