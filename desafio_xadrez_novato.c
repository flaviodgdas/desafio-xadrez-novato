#include <stdio.h>

int main(){

    printf("Desafio Xdrez-Novato: Movimentos, Torre, Bispo e Rainha.\n");

    int bispo = 0;
    int rainha = 0;

    // Mover torre 5 casas para a direita
    for (int torre = 0; torre <= 4; torre++)
    {
        printf("Direita\n");
    }

    //Mover bispo cinco casas para direita/cima
    while (bispo <= 5)
    {
        printf("Direita \n");
        bispo ++;
        printf("cima \n");
        bispo ++;
    } 

    //Mover rainha 8 casas para a esquerda
    do {
        printf("Esquerda \n");
        rainha ++;
    } while (rainha <= 7);
    
    printf("Posicoes das pecas corretas. fechando programa...");


    return 0;
}
