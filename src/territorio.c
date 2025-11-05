#include "territorio.h"
#include "jogador.h"
#include <stdio.h>
#include <stdlib.h>

void distribuirTerritorios(Jogador* jogadores, int numJogadores) {
    for (int i = 0; i < numJogadores; i++) {
        jogadores[i].numTerritorios = 3;  // Cada jogador começa com 3 territórios
        jogadores[i].territorios = malloc(jogadores[i].numTerritorios * sizeof(char*));

        // Aloca e distribui os territórios (simulação)
        for (int j = 0; j < jogadores[i].numTerritorios; j++) {
            jogadores[i].territorios[j] = malloc(30 * sizeof(char));  // Nome do território
            sprintf(jogadores[i].territorios[j], "Território %d", j + 1);  // Nome genérico do território
        }

        printf("Jogador %s recebeu %d territórios.\n", jogadores[i].nome, jogadores[i].numTerritorios);
    }
}
