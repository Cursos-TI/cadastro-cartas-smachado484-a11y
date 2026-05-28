#include <stdio.h>
<<<<<<< HEAD
#include <string.h> //biblioteca adicionada para poder usar o strcspn() para 
=======
#include <string.h>
>>>>>>> 343d532fad5c75d506c4dafe73c728470b6b8b8e

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
    int populacao1, populacao2;
    // População - o número de habitantes da cidade
    float area1, area2;
    // a área da cidade em km²
    float pib1, pib2;
    // O produto interno da cidade
    int ponto_turisticos1, ponto_turisticos2;
    // Número de pontos turísticos da cidade
<<<<<<< HEAD
    float densidade_populacional1, densidade_populacional2;
    // Variável para calcular a densidade populacional
    float pib_per_capita1, pib_per_capita2;
    // Variável para calcular o PIB per capita

    printf("*** SUPER TRUNFO ***\n");
=======
>>>>>>> 343d532fad5c75d506c4dafe73c728470b6b8b8e

  // Área para entrada de dados
    //Cadastro Carta 1
    printf("Carta 1:\n");
    
    printf("Estado: ");
    scanf(" %c", &estado1); // estado representado por uma letra de A a H
    
    printf("Código da carta: ");
    scanf("%s", codigo1); // código da carta representado pela letra do estado mais um número

    getchar();
<<<<<<< HEAD
    //remove o ENTER que ficou no buffer depois do scanf(), evitando que o nome da cidade saia errado

    printf("Nome da cidade: ");
    fgets(nome_da_cidade1, 50, stdin); // nome da cidade
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = 0; //strcspn usado para remover o ENTER que ficou dentro da string
=======

    printf("Nome da cidade: ");
    fgets(nome_da_cidade1, 50, stdin); // nome da cidade
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = 0;
>>>>>>> 343d532fad5c75d506c4dafe73c728470b6b8b8e

    printf("População: ");
    scanf("%d", &populacao1); // População - o número de habitantes da cidade

    printf("Área em Km2: ");
    scanf("%f", &area1); // a área da cidade em km²

    printf("PIB: ");
    scanf("%f", &pib1); // O produto interno da cidade

    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &ponto_turisticos1); // Número de pontos turísticos da cidade
<<<<<<< HEAD
    
    // Cálculo de variáveis Carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1; //valor do pib convertido de bilhões de reais para reais

=======
>>>>>>> 343d532fad5c75d506c4dafe73c728470b6b8b8e

    //Cadastro Carta 2
    printf("Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2); // estado representado por uma letra de A a H

    printf("Código da carta: ");
    scanf("%s", codigo2); // código da carta representado pela letra do estado mais um número

    getchar();
<<<<<<< HEAD
    //remove o ENTER que ficou no buffer depois do scanf(), evitando que o nome da cidade saia errado

    printf("Nome da cidade: ");
    fgets(nome_da_cidade2, 50, stdin); // nome da cidade
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = 0; //strcspn usado para remover o ENTER que ficou dentro da string
=======

    printf("Nome da cidade: ");
    fgets(nome_da_cidade2, 50, stdin); // nome da cidade
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = 0;
>>>>>>> 343d532fad5c75d506c4dafe73c728470b6b8b8e

    printf("População: ");
    scanf("%d", &populacao2); // População - o número de habitantes da cidade

    printf("Área em Km2: ");
    scanf("%f", &area2); // a área da cidade em km²

    printf("PIB: ");
    scanf("%f", &pib2); // O produto interno da cidade
    
    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &ponto_turisticos2); // Número de pontos turísticos da cidade
<<<<<<< HEAD

    // Cálculo de variáveis Carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2; //valor do pib convertido de bilhões de reais para reais
=======
>>>>>>> 343d532fad5c75d506c4dafe73c728470b6b8b8e

  // Área para exibição dos dados da cidade
    //Exibição Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %4s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n",  pib1);
    printf("Número de Pontos Turisticos: %d\n", ponto_turisticos1);
<<<<<<< HEAD
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
=======
>>>>>>> 343d532fad5c75d506c4dafe73c728470b6b8b8e

    //Exibição Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %4s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2) ;
    printf("PIB: %.2f bilhões de reais\n",  pib2);
    printf("Número de Pontos Turisticos: %d\n", ponto_turisticos2);
<<<<<<< HEAD
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
=======
>>>>>>> 343d532fad5c75d506c4dafe73c728470b6b8b8e

return 0;
} 
