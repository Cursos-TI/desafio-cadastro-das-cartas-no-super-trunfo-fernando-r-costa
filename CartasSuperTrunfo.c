#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Código inicial, base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Variáveis separadas por atributos de cada cidade.
    char codigoCarta_1[4], codigoCarta_2[4];
    char estado_1, estado_2;
    char cidade_1[31], cidade_2[31];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontosTuristicos_1, pontosTuristicos_2;

    // Cadastro das Cartas:
    // Captura das entradas do usuário para cada atributo de cada carta.
    printf("Insira o código da carta 1: ");
    scanf("%3s", codigoCarta_1);
    printf("Insira o estado da carta 1: ");
    scanf(" %c", &estado_1);
    scanf("%*c"); // Limpeza do buffer de entrada.
    printf("Insira o nome da cidade da carta 1: ");
    fgets(cidade_1, 31, stdin);
    cidade_1[strcspn(cidade_1, "\n")] = 0;
    printf("Insira a população da cidade da carta 1: ");
    scanf("%d", &populacao_1);
    printf("Insira a área da cidade da carta 1: ");
    scanf("%f", &area_1);
    printf("Insira o PIB da cidade da carta 1: ");
    scanf("%f", &pib_1);
    printf("Insira a quantidade de pontos turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos_1);

    printf("\nInsira o código da carta 2: ");
    scanf("%3s", codigoCarta_2);
    printf("Insira o estado da carta 2: ");
    scanf(" %c", &estado_2);
    scanf("%*c"); // Limpeza do buffer de entrada.
    printf("Insira o nome da cidade da carta 2: ");
    fgets(cidade_2, 31, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0;
    printf("Insira a população da cidade da carta 2: ");
    scanf("%d", &populacao_2);
    printf("Insira a área da cidade da carta 2: ");
    scanf("%f", &area_2);
    printf("Insira o PIB da cidade da carta 2: ");
    scanf("%f", &pib_2);
    printf("Insira a quantidade de pontos turísticos da cidade da carta 2: ");
    scanf("%d", &pontosTuristicos_2);
    
    // Exibição dos Dados das Cartas:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigoCarta_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigoCarta_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_2);

    return 0;
}
