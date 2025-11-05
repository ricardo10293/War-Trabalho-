// src/jogador.h

#ifndef JOGADOR_H
#define JOGADOR_H

#define MAX_COR 20  // Tamanho máximo para a cor

typedef struct {
    char nome[50];
    char cor[MAX_COR];
    int tropas;
    int numTerritorios;  // Número de territórios que o jogador possui
    char** territorios;  // Ponteiro para um array de strings (nomes dos territórios)
} Jogador;

Jogador* cadastrarJogadores(int numJogadores);
void liberarJogadores(Jogador* jogadores, int numJogadores);

#endif // JOGADOR_H
