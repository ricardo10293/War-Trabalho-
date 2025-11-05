#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "territorio.h"

Territorio* criarTerritorio(char* nome, int tropas) {
    Territorio* t = (Territorio*) malloc(sizeof(Territorio));
    strncpy(t->nome, nome, MAX_NOME);
    t->tropas = tropas;
    t->dono = -1; // Inicialmente, sem dono
    return t;
}

void liberarTerritorio(Territorio* territorio) {
    free(territorio);
}
