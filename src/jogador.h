// src/jogador.h

#ifndef JOGADOR_H
#define JOGADOR_H

#define MAX_COR 20  // Definindo a constante MAX_COR com valor 20 (você pode mudar para o tamanho desejado)

typedef struct {
    char nome[50];
    char cor[MAX_COR];  // Usando MAX_COR para definir o tamanho do array
    int tropas;
} Jogador;

#endif // JOGADOR_H
