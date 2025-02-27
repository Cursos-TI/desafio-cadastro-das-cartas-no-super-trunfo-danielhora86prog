#include <stdio.h>
#include <string.h> // Para usar strcspn()

int main() {
    // Variáveis
    char estado1[50], estado2[50];
    int carta1, carta2;
    char nome1[50], nome2[50];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;

    // Entrada de Dados da Carta 01
    printf("Adicione os dados da carta 01!\n");
    printf("Digite qual Estado do País: \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0; // Remover o \n

    printf("Digite Código da carta: \n");
    scanf("%d", &carta1);
    while (getchar() != '\n'); // Limpar o buffer

    printf("Digite qual nome da Cidade: \n");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = 0; // Remover o \n

    printf("Digite a População: \n");
    scanf("%u", &populacao1);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos: \n");
    scanf("%d", &turisticos1);
    printf("Parabéns, você adicionou a carta 01!\n");

    while (getchar() != '\n'); // Limpar o buffer antes de ler a Carta 02

    // Entrada de Dados da Carta 02
    printf("Agora adicione a carta 02!\n");
    printf("Digite qual Estado do País: \n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0; // Remover o \n

    printf("Digite Código da carta: \n");
    scanf("%d", &carta2);
    while (getchar() != '\n'); // Limpar o buffer

    printf("Digite qual nome da Cidade: \n");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0; // Remover o \n

    printf("Digite a População: \n");
    scanf("%u", &populacao2);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos: \n");
    scanf("%d", &turisticos2);

    // Comparação
    printf("\nComparação de cartas:\n");

    printf("\nAtributo: População\n");
    printf("Carta 1 - %s (%s): %u\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %u\n", nome2, estado2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("\nAtributo: Área\n");
    printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("\nAtributo: PIB\n");
    printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pib2);
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("\nAtributo: Pontos Turísticos\n");
    printf("Carta 1 - %s (%s): %d\n", nome1, estado1, turisticos1);
    printf("Carta 2 - %s (%s): %d\n", nome2, estado2, turisticos2);
    if (turisticos1 > turisticos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (turisticos2 > turisticos1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}