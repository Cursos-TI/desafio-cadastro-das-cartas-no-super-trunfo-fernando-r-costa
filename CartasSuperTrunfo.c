#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Tema 2 - Cálculo de Densidade populacional e PIB per capita.

int main() {
    // Variáveis separadas por atributos de cada cidade.
    char codigoCarta_1[4], codigoCarta_2[4];
    char estado_1, estado_2;
    char cidade_1[31], cidade_2[31];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontosTuristicos_1, pontosTuristicos_2;
    float densidadePopulacional_1, densidadePopulacional_2;
    float pibPerCapita_1, pibPerCapita_2;

    // Cadastro das Cartas:
    // Captura das entradas do usuário para cada atributo de cada carta.
    printf("*** Cadastro da Carta 1 ***\n");
    printf("Insira o estado: ");
    scanf(" %c", &estado_1);
    printf("Insira o código: ");
    scanf("%3s", codigoCarta_1);
    scanf("%*c"); // Limpeza do buffer de entrada.
    printf("Insira o nome da cidade: ");
    fgets(cidade_1, 31, stdin);
    cidade_1[strcspn(cidade_1, "\n")] = 0;
    printf("Insira a população: ");
    scanf("%d", &populacao_1);
    printf("Insira a área: ");
    scanf("%f", &area_1);
    printf("Insira o PIB: ");
    scanf("%f", &pib_1);
    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos_1);

    printf("\n*** Cadastro da Carta 2 ***\n");
    printf("Insira o estado: ");
    scanf(" %c", &estado_2);
    printf("Insira o código: ");
    scanf("%3s", codigoCarta_2);
    scanf("%*c"); // Limpeza do buffer de entrada.
    printf("Insira o nome da cidade: ");
    fgets(cidade_2, 31, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0;
    printf("Insira a população: ");
    scanf("%d", &populacao_2);
    printf("Insira a área: ");
    scanf("%f", &area_2);
    printf("Insira o PIB: ");
    scanf("%f", &pib_2);
    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos_2);

    // Cálculo da Densidade Populacional e PIB per Capita:
    densidadePopulacional_1 = (float) populacao_1 / area_1;
    densidadePopulacional_2 = (float) populacao_2 / area_2;
    pibPerCapita_1 = (float) (pib_1*1000000000) / populacao_1;
    pibPerCapita_2 = (float) (pib_2*1000000000) / populacao_2;
    
    // Exibição dos Dados das Cartas:
    printf("\n### Carta 1: ###\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigoCarta_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_1);

    printf("\n### Carta 2: ###\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigoCarta_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_2);

    return 0;
}
