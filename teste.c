#include <stdio.h>

int main() {
    int populacao;
    float area;
    float pib;
    int turisticos;

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite a Area da Cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf( "Quantos pontos Turisticos: \n");
    scanf("%d", &turisticos);

    printf("\nDados da Cidade:\n");
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", turisticos);

    return 0;
}