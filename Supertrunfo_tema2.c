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
    scanf("%lu", &populacao1);  // Corrigido para %lu
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
    char estado2[3], codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;

     // Leitura dos dados da segunda carta
    printf("Digite o estado da cidade: 2");
    scanf("%s", estado2);
    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]", nomeCidade2); // Lê até a nova linha
    printf("Digite a população da cidade 2: ");
    scanf("%lu", &populacao2);  // Corrigido para %lu
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
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + (1.0 / densidadePopulacional2);

    // Escolha do atributo para comparação ( População)
    printf("\nComparacao de cartas (Atributo: População):\n");

    // Comparação da população
    printf (" Carta 1 - %s: População = %lu\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: População = %lu\n", nomeCidade2, pontosTuristicos2);

    // Decisão de quem venceu
    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%S) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
          } else{
            printf("Resultado: Empate!\n");
          }
    
     return 0;
 }
 