#include <stdio.h>

void moverTorre (int casas) { //Mover a Torre
    if (casas == 0) return;
    printf("Direita.\n");
    moverTorre (casas - 1);
}

void moverBispo (int casas) { //Mover o Bispo
    if (casas == 0) return;
        for (int i = 0; i < casas; i++) { //Mover para a cima
            for (int j = 0; j < 1; j++) { //Mover para a direita
                printf("Cima, Direita.\n");
            }
        } 
    moverBispo (casas - 1);
}

void moverRainha (int casas) { //Mover a Rainha
    if (casas == 0) return;
    printf("Esquerda.\n");
    moverRainha (casas - 1);
}

void moverCavalo (int casa) { //Mover o cavalo
    int i, j = 0;
        for (i = 0, j = 0; i < 2 && j < 1; i++, j++) { //Loop com múltiplas condições
            printf("Cima, Cima, Direita");
        }

}

int main (){
    
    printf("\n- Movimento da Torre -\n");
    moverTorre(5); //Move a Torre 5 vezes para a direita

    printf("\n- Movimento do Bispo -\n");
    moverBispo (5);//Move o Bispo 5 vezes para cima e à direita (diagonal)

    printf("\n- Movimento da Rainha -\n");
    moverRainha (8); //Move a Rainha 8 vezes para a Esquerda

    printf("\n- Movimento do Cavalo -\n");
    moverCavalo (1);//Move o cavalo 2 vezes para cima e uma para a direita

    return 0;
}