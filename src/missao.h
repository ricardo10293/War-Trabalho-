#ifndef MISSAO_H
#define MISSAO_H

typedef struct {
    char descricao[100];
    int tipo; // 1 = conquistar territórios, 2 = eliminar jogador, etc.
    int objetivo;
} Missao;

int verificarMissao(int numTerritorios, Missao* missao);

#endif
