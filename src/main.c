#include <stdio.h>
#include <stdlib.h>
#include "jogador.h"
#include "territorio.h"
#include "batalha.h"
#include "missao.h"

int main() {
    int numJogadores;
    printf("Quantos jogadores? ");
    scanf("%d", &numJogadores);

    Jogador* jogadores = cadastrarJogadores(numJogadores);

    // Simulando o jogo
    // [Adicione o loop principal aqui com interações de ataques, missões etc.]

    liberarJogadores(jogadores, numJogadores);
    return 0;
}
