#include <stdio.h>
#include <string.h> //biblioteca adicionada para poder usar o strcspn()

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    // estado representado por uma letra de A a H
    char codigo1[10], codigo2[10];
    // código da carta representado pela letra do estado mais um número
    char nome_da_cidade1[50], nome_da_cidade2[50];
    // nome da cidade
    unsigned long int populacao1, populacao2;
    // População - o número de habitantes da cidade
    float area1, area2;
    // a área da cidade em km²
    float pib1, pib2;
    // O produto interno da cidade
    int pontos_turisticos1, pontos_turisticos2;
    // Número de pontos turísticos da cidade
    float densidade_populacional1, densidade_populacional2;
    // Variável para calcular a densidade populacional
    float pib_per_capita1, pib_per_capita2;
    // Variável para calcular o PIB per capita
    float superpoder1, superpoder2;
    // Variável para calcular o super poder da carta
    int resultado_popupacao, resultado_area, resultado_pib, resultado_pontos_turisticos, resultado_densidade_populacional, resultado_pib_per_capita, resultado_superpoder;
    // Variaáveis de comparação entre atribuitos

    printf("*** SUPER TRUNFO ***\n");
    printf("\n");

  // Área para entrada de dados
    printf("*** Vamos começar cadastrando suas cartas! ***\n");
    printf("\n");

    //Cadastro Carta 1
    printf("Carta 1:\n");
    
    printf("Estado: ");
    scanf(" %c", &estado1); // estado representado por uma letra de A a H
    
    printf("Código da carta: ");
    scanf("%s", codigo1); // código da carta representado pela letra do estado mais um número

    getchar(); //remove o ENTER que ficou no buffer depois do scanf(), evitando que o nome da cidade saia errado

    printf("Nome da cidade: ");
    fgets(nome_da_cidade1, 50, stdin); // nome da cidade
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = 0; //strcspn usado para remover o ENTER que ficou dentro da string

    printf("População: ");
    scanf("%lu", &populacao1); // População - o número de habitantes da cidade

    printf("Área em Km2: ");
    scanf("%f", &area1); // a área da cidade em km²

    printf("PIB: ");
    scanf("%f", &pib1); // O produto interno da cidade

    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos1); // Número de pontos turísticos da cidade
    
    // Cálculo de variáveis Carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1; //valor do pib convertido de bilhões de reais para reais
    superpoder1 = populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade_populacional1);

    //Cadastro Carta 2
    printf("Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2); // estado representado por uma letra de A a H

    printf("Código da carta: ");
    scanf("%s", codigo2); // código da carta representado pela letra do estado mais um número

    getchar(); //remove o ENTER que ficou no buffer depois do scanf(), evitando que o nome da cidade saia errado

    printf("Nome da cidade: ");
    fgets(nome_da_cidade2, 50, stdin); // nome da cidade
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = 0; //strcspn usado para remover o ENTER que ficou dentro da string

    printf("População: ");
    scanf("%lu", &populacao2); // População - o número de habitantes da cidade

    printf("Área em Km2: ");
    scanf("%f", &area2); // a área da cidade em km²

    printf("PIB: ");
    scanf("%f", &pib2); // O produto interno da cidade
    
    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos2); // Número de pontos turísticos da cidade

    // Cálculo de variáveis Carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2; //valor do pib convertido de bilhões de reais para reais
    superpoder2 = populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade_populacional2);

  // Área para exibição dos dados da cidade
    printf("\n");  
    printf("*** Essas foram as cartas cadastradas: ***\n");

    //Exibição Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %4s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n",  pib1);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", superpoder1);
    printf("\n");

    //Exibição Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %4s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km2\n", area2) ;
    printf("PIB: %.2f bilhões de reais\n",  pib2);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n");

  //Área da Batalha de Cartas no Super Trunfo - comparação de variáveis
    printf("*** A batalha vai começar! Qual carta irá vencer? ***\n");
    printf("\n");

    // Cálculo da comparação entre variáveis
    resultado_popupacao = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    resultado_densidade_populacional = densidade_populacional1 < densidade_populacional2;
    resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    resultado_superpoder = superpoder1 > superpoder2;

    //Exibição dos resultados
    printf("Comparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", resultado_popupacao);
    printf("Área: Carta 1 venceu (%d)\n", resultado_area);
    printf("PIB: Carta 1 venceu (%d)\n", resultado_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultado_pontos_turisticos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultado_densidade_populacional);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultado_pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultado_superpoder);
    printf("\n");
    printf("*** Partida encerrada! Até a próxima! ***\n");

return 0;
} 
