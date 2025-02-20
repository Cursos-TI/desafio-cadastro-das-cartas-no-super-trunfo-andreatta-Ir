#include <stdio.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado[3], codigo[4], nomeCidade[50];
    unsigned long int populacao;
    int pontosTuristicos;
    float area, pib, densidade, pibPerCapita, superPoder;
} Carta;

// Função para ler os dados de uma carta
void lerCarta(Carta *carta, int num) {
    printf("\nDigite os dados da carta %d:\n", num);
    printf("Estado: "); scanf("%s", carta->estado);
    printf("Código: "); scanf("%s", carta->codigo);
    printf("Nome da cidade: "); scanf(" %[^""]", carta->nomeCidade);
    printf("População: "); scanf("%lu", &carta->populacao);
    printf("Área (km²): "); scanf("%f", &carta->area);
    printf("PIB (bilhões R$): "); scanf("%f", &carta->pib);
    printf("Pontos turísticos: "); scanf("%d", &carta->pontosTuristicos);
    
    // Cálculos automáticos
    carta->densidade = carta->populacao / carta->area;
    carta->pibPerCapita = (carta->pib * 1e9) / carta->populacao;
}

// Função para exibir o menu de escolha de atributo
int escolherAtributo(int escolhido) {
    int opcao;
    printf("\nEscolha um atributo:\n");
    if (escolhido != 1) printf("1. População\n");
    if (escolhido != 2) printf("2. Área\n");
    if (escolhido != 3) printf("3. PIB\n");
    if (escolhido != 4) printf("4. Pontos turísticos\n");
    if (escolhido != 5) printf("5. Densidade populacional\n");
    if (escolhido != 6) printf("6. PIB per capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);
    return (opcao >= 1 && opcao <= 6 && opcao != escolhido) ? opcao : escolherAtributo(escolhido);
}

// Função para obter o valor do atributo escolhido
float obterAtributo(Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontosTuristicos;
        case 5: return 1 / c.densidade; // Densidade populacional inverte a lógica
        case 6: return c.pibPerCapita;
    }
    return 0;
}

// Função para determinar o vencedor com base nos atributos escolhidos
void determinarVencedor(Carta c1, Carta c2, int atributo1, int atributo2) {
    float v1_a1 = obterAtributo(c1, atributo1);
    float v1_a2 = obterAtributo(c1, atributo2);
    float v2_a1 = obterAtributo(c2, atributo1);
    float v2_a2 = obterAtributo(c2, atributo2);
    
    printf("\n%s: %.2f (Atributo %d) + %.2f (Atributo %d) = %.2f\n", c1.nomeCidade, v1_a1, atributo1, v1_a2, atributo2, v1_a1 + v1_a2);
    printf("%s: %.2f (Atributo %d) + %.2f (Atributo %d) = %.2f\n", c2.nomeCidade, v2_a1, atributo1, v2_a2, atributo2, v2_a1 + v2_a2);
    
    if (v1_a1 + v1_a2 > v2_a1 + v2_a2)
        printf("%s venceu!\n", c1.nomeCidade);
    else if (v2_a1 + v2_a2 > v1_a1 + v1_a2)
        printf("%s venceu!\n", c2.nomeCidade);
    else
        printf("Empate!\n");
}

int main() {
    Carta carta1, carta2;
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);
    
    int atributo1 = escolherAtributo(0);
    int atributo2 = escolherAtributo(atributo1);
    
    determinarVencedor(carta1, carta2, atributo1, atributo2);
    
    return 0;
}
