#include <stdio.h>

int main() {
    int populacao; //variavel referente a população da cidade//
    float area; //variavel referente a area da cidade//
    float pib; //variavel referente ao pib da cidade
    int turisticos; //variavel referente a quanidade de pontos turisticos da cidade//

    printf("Digite a População: \n"); //caixa texto que indagara quanto a população//
    scanf("%d", &populacao); // entrada de dado referente a população//

    printf("Digite a Area da Cidade: \n"); // caixa texto que indagara a area da cidade//
    scanf("%f", &area); //entrada de dado referente a area//

    printf("Digite o PIB da cidade: \n"); // caixa texto que indagara qual PIB da cidade//
    scanf("%f", &pib); // entrada de dado referente ao PIB//

    printf( "Quantos pontos Turisticos: \n"); //caixa texto que indagara quantos pontos turisticos//
    scanf("%d", &turisticos); //entrada de dado de quantidade de pontos turisticos da cidade//

    printf("\nDados da Cidade:\n"); // inserir essa linha para ficar mais claro as informações//
    printf("População: %d habitantes\n", populacao); // população da cidade//
    printf("Área: %.2f km²\n", area); //area da cidade//
    printf("PIB: R$ %.2f\n", pib); //pib da cidade//
    printf("Pontos Turísticos: %d\n", turisticos); //pontos turisticos da cidade//

    return 0;
}