#include <stdio.h>
#include <stdlib.h>
#include "batalha.h"

void atacar(Territorio *atacante, Territorio *defensor) {
    printf("\n%s ataca %s!\n", atacante->nome, defensor->nome);
    if (atacante->tropas <= 1) {
        printf("Ataque impossível — tropas insuficientes!\n");
        return;
    }

    // Simulação simples de ataque:
    int perdaAtacante = rand() % 3; 
    int perdaDefensor = rand() % 3;

    atacante->tropas -= perdaAtacante;
    defensor->tropas -= perdaDefensor;

    if (defensor->tropas <= 0) {
        printf("Território conquistado!\n");
        defensor->dono = atacante->dono;
        defensor->tropas = 1;
        atacante->tropas--;
    } else {
        printf("Ataque falhou!\n");
    }
}
