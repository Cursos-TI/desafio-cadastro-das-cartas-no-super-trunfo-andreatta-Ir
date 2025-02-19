#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1[3], codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;

    // Leitura dos dados da primeira carta
    printf("Digite o estado da cidade 1: ");
    scanf("%s", estado1);
    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1: ");
    scanf(" %[^\n]", nomeCidade1); // Lê até a nova linha
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita para a primeira cidade
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1; // Convertendo PIB de bilhões para reais

    // Exibição dos resultados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

     // Declaração das variáveis para a segunda carta
     char estado2[3], codigo2[4], nomeCidade2[50];
     int populacao2, pontosTuristicos2;
     float area2, pib2, densidadePopulacional2, pibPerCapita2;

     // Leitura dos dados da segunda carta
    printf("\nDigite o estado da cidade 2: ");
    scanf("%s", estado2);
    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]", nomeCidade2); // Lê até a nova linha
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

     // Cálculo da densidade populacional e PIB per capita para a segunda cidade
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2; // Convertendo PIB de bilhões para reais

     // Exibição dos resultados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}