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
#ifndef JOGADOR_H
#define JOGADOR_H

#define MAX_NOME 100  // Tamanho máximo para o nome do jogador

// Definição da estrutura Jogador
typedef struct {
    char nome[MAX_NOME];
    char cor[20];
    int tropas;
    int numTerritorios;
    void* territorios;  // Pode ser um ponteiro para outra estrutura, como um vetor de territórios
} Jogador;

void exibirJogador(Jogador jogador);  // Declaração da função para exibir as informações do jogador
void liberarJogadores(Jogador* jogadores, int numJogadores);  // Declaração da função para liberar memória alocada

#endif
