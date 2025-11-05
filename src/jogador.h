#ifndef JOGADOR_H
#define JOGADOR_H

#include "territorio.h"

typedef struct {
    char nome[MAX_NOME];
    char cor[MAX_COR];
    Territorio* territorios;
    int numTerritorios;
} Jogador;

Jogador* cadastrarJogadores(int n);
void liberarJogadores(Jogador* jogadores, int n);

#endif
