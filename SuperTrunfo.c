#include <stdio.h>

// Programa para simular a criação e exibição de cartas do jogo Super Trunfo
int main()
{
    // Declaração das variáveis da carta 1
    char   Estado1;
    char   CodigoDaCarta1 [50];
    char   NomeDaCidade1  [50];
    int    População1;
    float  AreaEmKm2_1;
    float  PIB1;
    int    NumeroDePontosTuristicos1;
    float  DensidadePopulacional1;
    float  PibPerCapita1;


    // Leitura dos dados da carta 1
    printf("Digite uma letra de 'A' a 'H' correspondente ao estado 1: \n");
    scanf("%c", &Estado1);

    printf("Digite a letra do estado 1 seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf(" %s", CodigoDaCarta1);

    printf("Digite o nome da cidade 1: \n");
    scanf(" %[^\n]", NomeDaCidade1);

    printf("Digite o número correspondente à população da cidade 1: \n");
    scanf(" %d", &População1);

    printf("Digite a área da cidade 1 em km²: \n");
    scanf("%f", &AreaEmKm2_1);

    printf("Digite o número correspondente ao PIB da cidade 1: \n");
    scanf("%f", &PIB1);

    printf("Digite o número correspondente ao número de pontos turísticos da cidade 1: \n");
    scanf("%d", &NumeroDePontosTuristicos1);

    DensidadePopulacional1 = População1 / AreaEmKm2_1;
    PibPerCapita1 = PIB1 / População1;

    
    // Declaração das variáveis da carta 2
    char   Estado2;
    char   CodigoDaCarta2 [50];
    char   NomeDaCidade2  [50];
    int    População2;
    float  AreaEmKm2_2;
    float  PIB2;
    int    NumeroDePontosTuristicos2;
    float  DensidadePopulacional2;
    float  PibPerCapita2;

    // Leitura dos dados da carta 2
    printf("Digite uma letra de 'A' a 'H' correspondente ao estado 2: \n");
    scanf(" %c", &Estado2);

    printf("Digite a letra do estado 2 seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf(" %s", CodigoDaCarta2);

    printf("Digite o nome da cidade 2: \n");
    scanf(" %[^\n]", NomeDaCidade2);

    printf("Digite o número correspondente à população da cidade 2: \n");
    scanf("%d", &População2);

    printf("Digite a área da cidade 2 em km²: \n");
    scanf("%f", &AreaEmKm2_2);

    printf("Digite o número correspondente ao PIB da cidade 2: \n");
    scanf("%f", &PIB2);

    printf("Digite o número correspondente ao número de pontos turísticos da cidade 2: \n");
    scanf("%d", &NumeroDePontosTuristicos2);

    DensidadePopulacional2 = População2 / AreaEmKm2_2;
    PibPerCapita2 = PIB2 / População2;

    // Exibição das informações das cartas
    printf("  Carta 1: \n  Estado: %c\n  Codigo: %s\n  Nome da Cidade: %s\n  População: %d\n  Área: %.2f km²\n  PIB: %.2f\n  Número de Pontos Turísticos: %d\n  Densidade Populacional: %.2f\n  PIB per Capita: %.2f\n", Estado1, CodigoDaCarta1, NomeDaCidade1, População1, AreaEmKm2_1, PIB1, NumeroDePontosTuristicos1, DensidadePopulacional1, PibPerCapita1);
    
    printf("  Carta 2: \n  Estado: %c\n  Codigo: %s\n  Nome da Cidade: %s\n  População: %d\n  Área: %.2f km²\n  PIB: %.2f\n  Número de Pontos Turísticos: %d\n  Densidade Populacional: %.2f\n  PIB per Capita: %.2f\n", Estado2, CodigoDaCarta2, NomeDaCidade2, População2, AreaEmKm2_2, PIB2, NumeroDePontosTuristicos2, DensidadePopulacional2, PibPerCapita2);





    return 0;
}