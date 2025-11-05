#ifndef TERRITORIO_H
#define TERRITORIO_H

#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    int tropas;
    int dono; // índice do jogador dono do território
} Territorio;

Territorio* criarTerritorio(char* nome, int tropas);
void liberarTerritorio(Territorio* territorio);

#endif
