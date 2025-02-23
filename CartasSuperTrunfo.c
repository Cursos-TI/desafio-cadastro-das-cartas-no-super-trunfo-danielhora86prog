#include <stdio.h>
#include <string.h> // Para usar strcspn()

int main() {
    char estado1[50], estado2[50]; // nome do estado
    int cod1, cod2; // código da cidade
    char nome1[50], nome2[50]; // nome da cidade
    long unsigned int populacao1, populacao2; // população da cidade
    float area1, area2; // área da cidade
    float pib1, pib2; // PIB da cidade
    int turisticos1, turisticos2; // quantidade de pontos turísticos
    float densidade1, densidade2; // densidade demográfica
    float percapita1, percapita2; // PIB per capita

    // Entrada de Dados
    printf("Digite qual Estado do País: \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0; // Remover o \n

    printf("Digite Código: \n");
    scanf("%d", &cod1);
    getchar(); // Limpar o buffer (para garantir que a quebra de linha seja removida)

    printf("Digite qual nome da Cidade: \n");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = 0; // Remover o \n

    printf("Digite a População: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos: \n");
    scanf("%d", &turisticos1);

    getchar(); // Limpar o buffer antes de ler o estado2

    printf("Digite qual Estado do País: \n"); 
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0; // Remover o \n

    printf("Digite Código: \n");
    scanf("%d", &cod2);
    getchar(); // Limpar o buffer novamente

    printf("Digite qual nome da Cidade: \n");
    fgets(nome2,sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0; // Remover o \n

    printf("Digite a População: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos: \n");
    scanf("%d", &turisticos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;

    // Saída de Dados
    printf("\nDados da Cidade 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", cod1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f trilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", percapita1);

    printf("\nDados da Cidade 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", cod2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f trilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", percapita2);

    printf("\nComparando as cidades:\n");

    // Comparações e impressão do vencedor
    printf("\nPopulação: %s\n", populacao1 > populacao2 ? nome1 : nome2);
    printf("Área: %s\n", area1 > area2 ? nome1 : nome2);
    printf("PIB: %s\n", pib1 > pib2 ? nome1 : nome2);
    printf("Pontos Turísticos: %s\n", turisticos1 > turisticos2 ? nome1 : nome2);
    printf("Densidade Populacional: %s\n", densidade1 < densidade2 ? nome1 : nome2); 
    printf("PIB per capita: %s\n", percapita1 > percapita2 ? nome1 : nome2);

    return 0;
}