#include <stdio.h>

int main(){

    printf("Desafio Xdrez-Aventureiro: Movimentos, Torre, Bispo e Rainha.\n");

    int bispo = 0;
    int rainha = 0;

    // Mover torre 5 casas para a direita
    printf("=-= Torre =-=\n");
    for (int torre = 0; torre <= 4; torre++)
    {
        printf("Direita\n");
    }

    //Mover bispo cinco casas para direita/cima
    printf("=- Bispo -=\n");
    while (bispo <= 5)
    {
        printf("Direita \n");
        bispo ++;
        printf("Cima \n");
        bispo++;
    }     

    //Mover rainha 8 casas para a esquerda
    printf("=- Rainha -=\n");
    do {
        printf("Esquerda \n");
        rainha ++;
    } while (rainha <= 7);    
    
    printf("=- Cavalo -=\n");
    //Mover o cavalo duas casas para cima e uma para direita
    int Cavalo = 1; // Flag para controlar o movimento em L
    while (Cavalo--)
    {
        for (int Cavalo = 0; Cavalo < 2; Cavalo++){
            printf("Cima\n"); // Imprime "Cima" duas vezes
        }
        printf("Direita\n"); // Imprime "Direita" uma vez
    }
    printf("Posicoes das pecas corretas. fechando programa...");

    return 0;
}
