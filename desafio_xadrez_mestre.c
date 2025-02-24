#include <stdio.h>

// Movimento da Torre(recursividade)
void moverTorre(int casas){
    if (casas > 0)// se casas maior que 0, começando com 5 declarado no main().
    {
        
        printf("Direita\n"); // imprime "Direita"        
        moverTorre(casas - 1);// apartir do 5 declarado no main(), retira 1 em cada rodada, até chegar no zero.
    }    
}

// Movimento do Bispo(recursividade)
void moverBispo(int casas){
    if (casas > 0)
    {
        
        printf("Cima\n");
        printf("Direita\n"); 
        moverBispo(casas - 1);
               
    }    
}

// Movimento da Rainha(recursividade)
void moverRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }    
}

// Movimento do Cavalo(recursividade)
void moverCavalo(int casas){
    while (casas--)
    {
        for (int casas = 0; casas < 2; casas++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
        
    }    
}

int main(){
    printf("=-= Desafio Xadrez Mestre =-=\n");
    printf("\n");

    printf("==- Torre -==\n");
    moverTorre(5);

    printf("==- Bispo -==\n");
    moverBispo(5);

    printf("==- Rainha -==\n");
    moverRainha(8);

    printf("==- Cavalo -==\n");
    moverCavalo(1);
    
    printf("\n");
    printf("Volte sempre!");
    
    return 0;
}