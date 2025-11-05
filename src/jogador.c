// src/jogador.c

#include "jogador.h"
#include <stdio.h>
#include <stdlib.h>

// Função para cadastrar jogadores
Jogador* cadastrarJogadores(int numJogadores) {
    Jogador* jogadores = malloc(numJogadores * sizeof(Jogador));  // Aloca espaço para os jogadores

    for (int i = 0; i < numJogadores; i++) {
        printf("Digite o nome do jogador %d: ", i + 1);
        fgets(jogadores[i].nome, 50, stdin);  // Leitura do nome do jogador

        printf("Digite a cor do jogador %d: ", i + 1);
        fgets(jogadores[i].cor, MAX_COR, stdin);  // Leitura da cor do jogador

        jogadores[i].tropas = 10;  // Defina o número inicial de tropas (exemplo)
        jogadores[i].numTerritorios = 0;  // Inicializa o número de territórios
        jogadores[i].territorios = NULL;  // Inicializa o ponteiro para territórios como NULL
    }

    return jogadores;
}

// Função para liberar a memória dos jogadores
void liberarJogadores(Jogador* jogadores, int numJogadores) {
    for (int i = 0; i < numJogadores; i++) {
        free(jogadores[i].territorios);  // Libera a memória alocada para territórios, se houver
    }

    free(jogadores);  // Libera a memória do array de jogadores
}
