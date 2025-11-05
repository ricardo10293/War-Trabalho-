// src/main.c
#include "jogador.h"
#include <stdio.h>

// Declarar as funções que você vai usar
Jogador* cadastrarJogadores(int numJogadores);
void liberarJogadores(Jogador* jogadores, int numJogadores);

int main() {
    int numJogadores = 2;
    Jogador* jogadores = cadastrarJogadores(numJogadores);
    
    // Lógica do jogo...

    liberarJogadores(jogadores, numJogadores);
    return 0;
}
