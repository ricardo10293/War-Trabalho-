void cadastrarJogadores(Jogador* jogadores, int numJogadores) {
    for (int i = 0; i < numJogadores; i++) {
        printf("Digite o nome do jogador %d: ", i + 1);
        fgets(jogadores[i].nome, MAX_NOME, stdin);
        jogadores[i].nome[strcspn(jogadores[i].nome, "\n")] = 0;  // Remove o '\n' do final

        escolherCor(&jogadores[i]);  // Chama a função para escolher a cor
        jogadores[i].tropas = 10;  // Número inicial de tropas
        jogadores[i].numTerritorios = 0;  // Inicializa o número de territórios
        jogadores[i].territorios = NULL;  // Inicializa o ponteiro para territórios como NULL
    }
}
