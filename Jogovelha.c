#include <stdio.h>

// Função para exibir o tabuleiro
void exibirTabuleiro(char tabuleiro[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

// Função para verificar se um jogador venceu
int verificarVitoria(char tabuleiro[3][3], char jogador) {
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) {
            return 1;
        }
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador) {
            return 1;
        }
    }
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) {
        return 1;
    }
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador) {
        return 1;
    }
    return 0;
}

int main() {
    char tabuleiro[3][3]; // Tabuleiro do jogo
    char jogadorAtual = 'X'; // Jogador atual (X ou O)
    int linha, coluna; // Linha e coluna escolhidas pelo jogador
    int jogadas = 0; // Contador de jogadas
    int vitoria = 0; // Variável para verificar se houve vitória

    // Inicializa o tabuleiro com espaços vazios
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

    printf("Bem-vindo ao Jogo da Velha!\n");

    // Loop principal do jogo
    while (jogadas < 9 && !vitoria) {
        exibirTabuleiro(tabuleiro);
        printf("Jogador %c, digite a linha (1-3): ", jogadorAtual);
        scanf("%d", &linha);
        printf("Jogador %c, digite a coluna (1-3): ", jogadorAtual);
        scanf("%d", &coluna);

        // Verifica se a posição escolhida é válida
        if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3 || tabuleiro[linha-1][coluna-1] != ' ') {
            printf("Posicao invalida. Tente novamente.\n");
            continue;
        }

        // Marca a posição escolhida com o símbolo do jogador atual
        tabuleiro[linha-1][coluna-1] = jogadorAtual;

        //
