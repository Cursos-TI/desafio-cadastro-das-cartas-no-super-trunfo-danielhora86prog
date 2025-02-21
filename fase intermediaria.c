#include <stdio.h>
#include <string.h> // Para usar strcspn()

int main() {
    char estado[50]; // nome do estado
    int cod; // código da cidade
    char nome[50]; // nome da cidade
    int populacao; // população da cidade
    float area; // área da cidade
    float pib; // PIB da cidade
    int turisticos; // quantidade de pontos turísticos
    float densidade; // densidade demográfica
    float percapita; // PIB per capita

    // Entrada de Dados
    printf("Digite qual Estado do País: \n");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0; // Remover o \n

    printf("Digite Código: \n");
    scanf("%d", &cod);
    getchar(); // Limpar o buffer

    printf("Digite qual nome da Cidade: \n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // Remover o \n

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos: \n");
    scanf("%d", &turisticos);

    // Cálculos
    densidade = populacao / area;
    percapita = pib / populacao;

    // Saída de Dados
    printf("\nDados da Cidade:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %d\n", cod);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: R$ %.2f\n", percapita);

    return 0;
}