#include <stdio.h>

int main() {
    // Definindo variáveis para armazenar os dados da cidade
    char codigo[4]; // Código da cidade (ex: A01)
    char nome[100]; // Nome da cidade
    int populacao; // População da cidade
    float area; // Área da cidade em km²
    float pib; // PIB da cidade em milhões
    int pontos_turisticos; // Número de pontos turísticos

    // Cadastro das Cartas
    printf("Cadastro de Cidades\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome); // Lê uma linha inteira, incluindo espaços
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas
    printf("\nDados da Cidade Cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}