#include <stdio.h>
#include <string.h> // Para usar strcspn()


int main() {

    // Entrada das variaveis
    char estado1[50], estado2[50]; 
    int carta1, carta2; 
    char nome1[50], nome2[50]; 
    long unsigned int populacao1, populacao2; 
    float area1, area2; 
    float pib1, pib2; 
    int turisticos1, turisticos2; 
    float densidade1, densidade2; 
    float percapita1, percapita2; 
    float superpoder1, superpoder2; 

    // Entrada de Dados
    printf("Adicione os dados da carta 01!\n");
    printf("Digite qual Estado do País: \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0; // Remover o \n

    printf("Digite Código da carta: \n");
    scanf("%d", &carta1);
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
    printf("Parabéns você adicionou carta 01!\n");

    getchar(); // Limpar o buffer antes de ler o estado2

    printf("Agora adicione a carta 02!\n");
    printf("Digite qual Estado do País: \n"); 
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0; // Remover o \n

    printf("Digite Código da carta: \n");
    scanf("%d", &carta2);
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

    // Cálculo do Super Poder
    superpoder1 = populacao1 + area1 + pib1 + turisticos1 + percapita1 + (1 / densidade1);
    superpoder2 = populacao2 + area2 + pib2 + turisticos2 + percapita2 + (1 / densidade2);

    // Saída de Dados
    printf("\nDados da Cidade 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", carta1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f trilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", percapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nDados da Cidade 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", carta2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f trilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", percapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("\nComparação de Cartas:\n");

    // Comparações e impressão do vencedor
    printf("\nPopulação: Carta %d venceu (%d)\n", populacao1 > populacao2 ? carta1 : carta2, populacao1 > populacao2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? carta1 : carta2, area1 > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? carta1 : carta2, pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", turisticos1 > turisticos2 ? carta1 : carta2, turisticos1 > turisticos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? carta1 : carta2, densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", percapita1 > percapita2 ? carta1 : carta2, percapita1 > percapita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", superpoder1 > superpoder2 ? carta1 : carta2, superpoder1 > superpoder2 ? 1 : 0);

    return 0;
}