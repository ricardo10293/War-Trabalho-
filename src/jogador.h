#ifndef JOGADOR_H
#define JOGADOR_H

#define MAX_COR 20
#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    char cor[MAX_COR];
    int tropas;
    int numTerritorios;
    char** territorios;
} Jogador;

void cadastrarJogadores(Jogador* jogadores, int numJogadores);
void exibirJogador(Jogador jogador);
void liberarJogadores(Jogador* jogadores, int numJogadores);
void escolherCor(Jogador *jogador);

#endif
