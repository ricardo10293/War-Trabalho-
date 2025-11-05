#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogador.h"

Jogador* cadastrarJogadores(int n) {
    Jogador* jogadores = (Jogador*) malloc(n * sizeof(Jogador));
    for (int i = 0; i < n; i++) {
        printf("\n--- Cadastro do Jogador %d ---\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", jogadores[i].nome);
        printf("Cor: ");
        scanf(" %[^\n]", jogadores[i].cor);
        jogadores[i].territorios = NULL;
        jogadores[i].numTerritorios = 0;
    }
    return jogadores;
}

void liberarJogadores(Jogador* jogadores, int n) {
    for (int i = 0; i < n; i++) {
        free(jogadores[i].territorios);
    }
    free(jogadores);
}
