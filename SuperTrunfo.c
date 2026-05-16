#include <stdio.h>

// Programa para simular a criação e exibição de cartas do jogo Super Trunfo
int main()
{
    // Declaração das variáveis da carta 1
    char   Estado1;
    char   CodigoDaCarta1[50];
    char   NomeDaCidade1[50];
    unsigned long int Populacao1;
    float  AreaEmKm2_1;
    float  PIB1;
    int    NumeroDePontosTuristicos1;
    float  DensidadePopulacional1;
    float  PibPerCapita1;
    float  SuperPoder1;

    // Leitura dos dados da carta 1
    printf("Digite uma letra de 'A' a 'H' correspondente ao estado 1: \n");
    scanf(" %c", &Estado1);

    printf("Digite a letra do estado 1 seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf(" %s", CodigoDaCarta1);

    printf("Digite o nome da cidade 1: \n");
    scanf(" %[^\n]", NomeDaCidade1);

    printf("Digite o número correspondente à população da cidade 1: \n");
    scanf("%lu", &Populacao1);

    printf("Digite a área da cidade 1 em km²: \n");
    scanf("%f", &AreaEmKm2_1);

    printf("Digite o número correspondente ao PIB da cidade 1: \n");
    scanf("%f", &PIB1);

    printf("Digite o número correspondente ao número de pontos turísticos da cidade 1: \n");
    scanf("%d", &NumeroDePontosTuristicos1);

    DensidadePopulacional1 = (float)Populacao1 / AreaEmKm2_1;
    PibPerCapita1 = PIB1 / (float)Populacao1;
    
    // Cálculo do Super Poder 1
    SuperPoder1 = (float)Populacao1 + AreaEmKm2_1 + PIB1 + (float)NumeroDePontosTuristicos1 + PibPerCapita1 + (1.0 / DensidadePopulacional1);

    
    // Declaração das variáveis da carta 2
    char   Estado2;
    char   CodigoDaCarta2[50];
    char   NomeDaCidade2[50];
    unsigned long int Populacao2;
    float  AreaEmKm2_2;
    float  PIB2;
    int    NumeroDePontosTuristicos2;
    float  DensidadePopulacional2;
    float  PibPerCapita2;
    float  SuperPoder2;

    // Leitura dos dados da carta 2
    printf("Digite uma letra de 'A' a 'H' correspondente ao estado 2: \n");
    scanf(" %c", &Estado2);

    printf("Digite a letra do estado 2 seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf(" %s", CodigoDaCarta2);

    printf("Digite o nome da cidade 2: \n");
    scanf(" %[^\n]", NomeDaCidade2);

    printf("Digite o número correspondente à população da cidade 2: \n");
    scanf("%lu", &Populacao2);

    printf("Digite a área da cidade 2 em km²: \n");
    scanf("%f", &AreaEmKm2_2);

    printf("Digite o número correspondente ao PIB da cidade 2: \n");
    scanf("%f", &PIB2);

    printf("Digite o número correspondente ao número de pontos turísticos da cidade 2: \n");
    scanf("%d", &NumeroDePontosTuristicos2);

    DensidadePopulacional2 = (float)Populacao2 / AreaEmKm2_2;
    PibPerCapita2 = PIB2 / (float)Populacao2;
    
    // Cálculo do Super Poder 2
    SuperPoder2 = (float)Populacao2 + AreaEmKm2_2 + PIB2 + (float)NumeroDePontosTuristicos2 + PibPerCapita2 + (1.0 / DensidadePopulacional2);

    // Exibição das informações das cartas
    printf("\n  Carta 1: \n  Estado: %c\n  Codigo: %s\n  Nome da Cidade: %s\n  População: %lu\n  Área: %.2f km²\n  PIB: %.2f\n  Número de Pontos Turísticos: %d\n  Densidade Populacional: %.2f\n  PIB per Capita: %.2f\n  Super Poder: %.2f\n", Estado1, CodigoDaCarta1, NomeDaCidade1, Populacao1, AreaEmKm2_1, PIB1, NumeroDePontosTuristicos1, DensidadePopulacional1, PibPerCapita1, SuperPoder1);
    
    printf("\n  Carta 2: \n  Estado: %c\n  Codigo: %s\n  Nome da Cidade: %s\n  População: %lu\n  Área: %.2f km²\n  PIB: %.2f\n  Número de Pontos Turísticos: %d\n  Densidade Populacional: %.2f\n  PIB per Capita: %.2f\n  Super Poder: %.2f\n", Estado2, CodigoDaCarta2, NomeDaCidade2, Populacao2, AreaEmKm2_2, PIB2, NumeroDePontosTuristicos2, DensidadePopulacional2, PibPerCapita2, SuperPoder2);


    // Variáveis para guardar o resultado das comparações (1 para verdadeiro, 0 para falso)
    int resPop = Populacao1 > Populacao2;
    int resArea = AreaEmKm2_1 > AreaEmKm2_2;
    int resPIB = PIB1 > PIB2;
    int resPontos = NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2;
    int resDensidade = DensidadePopulacional1 < DensidadePopulacional2; // Vence a menor
    int resPibPerCapita = PibPerCapita1 > PibPerCapita2;
    int resSuper = SuperPoder1 > SuperPoder2;

    // Comparações impressas usando a lógica matemática (sem IF/ELSE)
    printf("\nComparação de Cartas:\n");
    
    printf("População: Carta %d venceu (%d)\n", 2 - resPop, resPop);
    printf("Área: Carta %d venceu (%d)\n", 2 - resArea, resArea);
    printf("PIB: Carta %d venceu (%d)\n", 2 - resPIB, resPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - resPontos, resPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - resDensidade, resDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - resPibPerCapita, resPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - resSuper, resSuper);

    return 0;
}