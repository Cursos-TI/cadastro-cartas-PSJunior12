#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

     //Informações de variáveis da Cidade 1
  int populacao1, turismo1 = 50;  
  float area1, pib1 = 133.75;
  char estado1 = 'A';
  char codigo1[5], cidade1[50] = "Serra";

     //Informações de variáveis da Cidade 2
  int populacao2, turismo2 = 30;  
  float area2, pib2 = 233.75;
  char estado2 = 'H';
  char codigo2[5], cidade2[50] = "Rio";
  
  // Área para entrada de dados
    
    //Dados da Cidade 1
  printf("Digite a inicial do seu estado: ");
  scanf(" %c" ,&estado1);

  printf("Digite o código da carta: ");
  scanf("%s" ,codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s" ,cidade1);

  printf("Digite a população da cidade: ");
  scanf("%d" ,&populacao1);

  printf("Digite a área da cidade em km²:");
  scanf(" %f" ,&area1);

  printf("Digite o PIB da cidade:");
  scanf(" %f" ,&pib1);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf(" %d" ,&turismo1);

    //Dados da Cidade 2

  printf(\n"Digite a inicial do seu estado: ");
  scanf(" %c" ,&estado2);

  printf("Digite o código da carta: ");
  scanf("%s" ,codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s" ,cidade2);

  printf("Digite a população da cidade: ");
  scanf("%d" ,&populacao2);

  printf("Digite a área da cidade em km²:");
  scanf(" %f" ,&area2);

  printf("Digite o PIB da cidade:");
  scanf(" %f" ,&pib2);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf(" %d" ,&turismo2);

  // Área para exibição dos dados da cidade

     //Imprimir os dados da Cidade 1

  printf("\n - Carta 1 -\n");
  printf("Estado: %c\n" ,estado1);
  printf("Código: %s\n" ,codigo1);
  printf("Nome da Cidade: %s\n" ,cidade1);
  printf("População: %d\n" ,populacao1);
  printf("Área: %.2f km²\n" ,area1);
  printf("PIB: %.2f bilhões de reais\n" ,pib1);
  printf("Número de Pontos Turísticos: %d\n" ,turismo1);

     //Imprimir os dados da Cidade 2

  printf("\n - Carta 2 -\n");
  printf("Estado: %c\n" ,estado2);
  printf("Código: %s\n" ,codigo2);
  printf("Nome da Cidade: %s\n" ,cidade2);
  printf("População: %d\n" ,populacao2);
  printf("Área: %.2f km²\n" ,area2);
  printf("PIB: %.2f bilhões de reais\n" ,pib2);
  printf("Número de Pontos Turísticos: %d\n" ,turismo2);

return 0;
} 
