#include "missao.h"
#include "jogador.h"
#include <stdio.h>

int verificarVitoria(Jogador* jogadores, int numJogadores) {
    for (int i = 0; i < numJogadores; i++) {
        if (jogadores[i].tropas <= 0) {
            printf("%s perdeu o jogo!\n", jogadores[i].nome);
            return 1;  // Fim do jogo, um jogador perdeu
        }
    }
    return 0;  // Jogo continua, ninguém perdeu ainda
}
