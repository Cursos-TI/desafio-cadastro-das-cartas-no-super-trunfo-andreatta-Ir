#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1[3], codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1,superPoder1;
    
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

    // Cálculo do Super Poder 
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1e9) + pontosTuristicos1 + (1.0 / densidadePopulacional1);
   
    // Declaração das variáveis para a primeira carta
    char estado1[3], codigo1[4], nomeCidade1[50];
    unsigned long int populaca2;
    int pontosTuristicos1;
    float area2, densidadePopulaciona2, pibPerCapita2, superPoder2;

     // Leitura dos dados da primeira carta
    printf("Digite o estado da cidade 2");
    scanf("%s", estado2);
    printf("Digite o código da carta 2 ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2 ");
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

    // Cálculo do SuperPoder
    superPoder2 = (float)populaca2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + (1.0 / densidadePopulaciona2);

     // Exibição das comparações
     printf("\nComparacao de Cartas:\n");
     printf("Populacao: Carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
     printf("Area: Carta %d venceu\n", area1 > area2 ? 1 : 2);
     printf("PIB: Carta %d venceu\n", pib1 > pib2 ? 1 : 2);
     printf("Pontos Turisticos: Carta %d venceu\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2);
     printf("Densidade Populacional: Carta %d venceu\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 2);
     printf("PIB per Capita: Carta %d venceu\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2);
     printf("Super Poder: Carta %d venceu\n", superPoder1 > superPoder2 ? 1 : 2);
 
     return 0;
 }
 