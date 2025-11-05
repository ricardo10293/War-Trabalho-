#include "missao.h"

int verificarMissao(int numTerritorios, Missao* missao) {
    if (missao->tipo == 1 && numTerritorios >= missao->objetivo) {
        return 1; // Missão completada
    }
    return 0;
}
