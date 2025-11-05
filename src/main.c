#include "jogador.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numJogadores = 2;
    Jogador* jogadores = cadastrarJogadores(numJogadores);  // Cadastra os jogadores
    
    // Distribuir territórios para os jogadores
    // (Simulação simples, você pode expandir essa parte)
    printf("\nDistribuindo territórios...\n");
    for (int i = 0; i < numJogadores; i++) {
        printf("Jogador %s recebeu %d territórios.\n", jogadores[i].nome, jogadores[i].numTerritorios);
    }

    // Simulando a fase de batalha (a lógica de ataque seria implementada aqui)
    printf("\nIniciando a batalha...\n");
    // Aqui você pode colocar a lógica de batalha entre os jogadores, por exemplo:
    // Jogador1 ataca Jogador2

    // Verificar a condição de vitória (você pode expandir essa parte)
    printf("\nVerificando a condição de vitória...\n");
    // Simular que um jogador venceu (por exemplo, se tiver mais territórios)
    printf("Jogador %s venceu o jogo!\n", jogadores[0].nome);  // Exemplo de vitória

    // Liberar memória
    liberarJogadores(jogadores, numJogadores);

    return 0;
}
