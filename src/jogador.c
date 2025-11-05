#include "jogador.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* cores[] = {"Vermelho", "Azul", "Verde", "Amarelo", "Preto", "Branco", "Laranja", "Rosa"};
#define MAX_CORES 8

void escolherCor(Jogador *jogador) {
    int escolha;
    printf("Escolha a cor do jogador (1-Vermelho, 2-Azul, 3-Verde, 4-Amarelo, 5-Preto, 6-Branco, 7-Laranja, 8-Rosa): ");
    scanf("%d", &escolha);

    // Verifica se a escolha é válida
    if (escolha >= 1 && escolha <= MAX_CORES) {
        strcpy(jogador->cor, cores[escolha - 1]);
        printf("Você escolheu a cor %s.\n", jogador->cor);
    } else {
        printf("Escolha inválida, tente novamente.\n");
        escolherCor(jogador);  // Chama a função novamente até escolher uma cor válida
    }
}

void cadastrarJogadores(Jogador* jogadores, int numJogadores) {
    for (int i = 0; i < numJogadores; i++) {
        printf("Digite o nome do jogador %d: ", i + 1);
        fgets(jogadores[i].nome, MAX_NOME, stdin);
        jogadores[i].nome[strcspn(jogadores[i].nome, "\n")] = 0;  // Remove o '\n' do final

        escolherCor(&jogadores[i]);  // Chama a função para escolher a cor
        jogadores[i].tropas = 10;  // Número inicial de tropas
        jogadores[i].numTerritorios = 0;  // Inicializa o número de territórios
        jogadores[i].territorios = NULL;  // Inicializa o ponteiro para territórios como NULL
    }
}

void exibirJogador(Jogador jogador) {
    printf("\nNome: %s\n", jogador.nome);
    printf("Cor: %s\n", jogador.cor);
    printf("Tropas: %d\n", jogador.tropas);
    printf("Número de territórios: %d\n", jogador.numTerritorios);
}

void liberarJogadores(Jogador* jogadores, int numJogadores) {
    for (int i = 0; i < numJogadores; i++) {
        if (jogadores[i].territorios != NULL) {
            free(jogadores[i].territorios);  // Libera memória dos territórios
        }
    }
    free(jogadores);  // Libera a memória dos jogadores
}
