#include "batalha.h"
#include "jogador.h"
#include <stdio.h>
#include <stdlib.h>

void simularBatalha(Jogador* jogadores, int numJogadores) {
    // Simula um confronto simples entre os dois primeiros jogadores (você pode expandir isso)
    if (jogadores[0].tropas > 0 && jogadores[1].tropas > 0) {
        printf("\nBatalha entre %s e %s!\n", jogadores[0].nome, jogadores[1].nome);

        // Um perde 1 tropa (simulação simples)
        jogadores[0].tropas--;
        jogadores[1].tropas--;

        printf("Após a batalha:\n");
        printf("%s tem %d tropas restantes.\n", jogadores[0].nome, jogadores[0].tropas);
        printf("%s tem %d tropas restantes.\n", jogadores[1].nome, jogadores[1].tropas);
    } else {
        printf("\nUm dos jogadores não tem tropas suficientes para batalhar!\n");
    }
}
