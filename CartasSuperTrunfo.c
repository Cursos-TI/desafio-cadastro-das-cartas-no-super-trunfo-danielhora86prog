#include <stdio.h>

int main(){
    int População;
    float Área;
    float Pib;
    int turisticos;

    printf("Digite a População: \n");
    scanf("%s", &População);

    printf("Digite a Area da Cidade: \n");
    scanf("xf", &Área);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Pib);

    printf( "Quantos pontos Turisticos: \n");
    scanf("xd", &turisticos);

    printf("População da cidade: %d - Área da cidade: %f", População, Área);
    printf("PIB da Cidade: %f - Pontos Turisticos: %d", Pib, turisticos);

    return 0;
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
