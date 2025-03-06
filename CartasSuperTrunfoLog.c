#include <stdio.h> 
#include <stdlib.h>

// Estrutura para armazenar as informações das cartas
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para obter o valor do atributo escolhido
float obter_valor_atributo(Carta carta, int escolha) {
    switch (escolha) {
        case 1: return carta.populacao;
        case 2: return carta.area;
        case 3: return carta.pib;
        case 4: return carta.pontos_turisticos;
        case 5: return carta.densidade_demografica;
        default: return -1; // Caso inválido
    }
}

// Função para exibir o nome do atributo escolhido
void exibir_nome_atributo(int escolha) {
    switch (escolha) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Número de Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
    }
}

// Função para comparar os atributos e determinar o vencedor
void comparar_cartas(Carta jogador, Carta computador, int escolha1, int escolha2) {
    printf("\nComparando as cartas...\n");

    float valor1_jogador = obter_valor_atributo(jogador, escolha1);
    float valor1_computador = obter_valor_atributo(computador, escolha1);
    float valor2_jogador = obter_valor_atributo(jogador, escolha2);
    float valor2_computador = obter_valor_atributo(computador, escolha2);

    printf("\nAtributos escolhidos:\n");
    printf("1º: "); exibir_nome_atributo(escolha1);
    printf("\n2º: "); exibir_nome_atributo(escolha2);
    
    // Exibir os valores dos atributos das cartas
    printf("\n\n%s\n", jogador.nome);
    printf("- "); exibir_nome_atributo(escolha1); printf(": %.2f\n", valor1_jogador);
    printf("- "); exibir_nome_atributo(escolha2); printf(": %.2f\n", valor2_jogador);

    printf("\n%s\n", computador.nome);
    printf("- "); exibir_nome_atributo(escolha1); printf(": %.2f\n", valor1_computador);
    printf("- "); exibir_nome_atributo(escolha2); printf(": %.2f\n", valor2_computador);

    // Definir vencedores para cada atributo individualmente
    int pontos_jogador = 0, pontos_computador = 0;

    // Avaliação do primeiro atributo
    if (escolha1 == 5) { // Densidade Demográfica (menor vence)
        if (valor1_jogador < valor1_computador) pontos_jogador++;
        else if (valor1_jogador > valor1_computador) pontos_computador++;
    } else { // Maior valor vence
        if (valor1_jogador > valor1_computador) pontos_jogador++;
        else if (valor1_jogador < valor1_computador) pontos_computador++;
    }

    // Avaliação do segundo atributo
    if (escolha2 == 5) { // Densidade Demográfica (menor vence)
        if (valor2_jogador < valor2_computador) pontos_jogador++;
        else if (valor2_jogador > valor2_computador) pontos_computador++;
    } else { // Maior valor vence
        if (valor2_jogador > valor2_computador) pontos_jogador++;
        else if (valor2_jogador < valor2_computador) pontos_computador++;
    }

    // Cálculo da soma dos atributos
    float soma_jogador = valor1_jogador + valor2_jogador;
    float soma_computador = valor1_computador + valor2_computador;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", jogador.nome, soma_jogador);
    printf("%s: %.2f\n", computador.nome, soma_computador);

    // Definir o vencedor
    if (soma_jogador > soma_computador)
        printf("\nVocê venceu a rodada!\n");
    else if (soma_jogador < soma_computador)
        printf("\nComputador venceu a rodada!\n");
    else
        printf("\nEmpate!\n");
}

int main() {
    int escolha1, escolha2;

    // Criando duas cartas para teste
    Carta jogador = {"Brasil", 214000000, 8515767.0, 2.05, 10, 25.1};
    Carta computador = {"Alemanha", 83100000, 357022.0, 4.85, 8, 232.8};

    // Exibir menu de atributos e garantir que o jogador escolha dois atributos diferentes
    printf("Super Trunfo - Escolha dois atributos para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &escolha1);
    
    // Validar a primeira escolha
    while (escolha1 < 1 || escolha1 > 5) {
        printf("Opção inválida! Escolha um número de 1 a 5: ");
        scanf("%d", &escolha1);
    }

    // Escolha do segundo atributo
    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &escolha2);

    // Validar a segunda escolha para que não seja repetida
    while (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
        printf("Opção inválida! Escolha um número de 1 a 5, diferente do primeiro: ");
        scanf("%d", &escolha2);
    }

    // Comparar as cartas com base nas escolhas
    comparar_cartas(jogador, computador, escolha1, escolha2);

    return 0;
}