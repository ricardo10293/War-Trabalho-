#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogador.h"
#include "territorio.h"
#include "batalha.h"
#include "missao.h"

int main() {
    int numJogadores = 2;

    // Cadastro de jogadores
    Jogador* jogadores = malloc(numJogadores * sizeof(Jogador));
    cadastrarJogadores(jogadores, numJogadores);

    // Exibe as informações dos jogadores
    printf("\nInformações dos Jogadores:\n");
    for (int i = 0; i < numJogadores; i++) {
        exibirJogador(jogadores[i]);
    }

    // Distribui territórios para os jogadores
    distribuirTerritorios(jogadores, numJogadores);

    // Simulação do jogo com batalhas
    while (!verificarVitoria(jogadores, numJogadores)) {
        simularBatalha(jogadores, numJogadores);
    }

    // Libera memória alocada
    liberarJogadores(jogadores, numJogadores);

    return 0;
}
