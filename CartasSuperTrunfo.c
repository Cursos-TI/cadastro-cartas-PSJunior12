#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

     //Informações de variáveis da Cidade 1
  unsigned long int populacao1, turismo1 = 50;  
  float area1, pib1 = 133.75;
  char estado1 = 'A';
  char codigo1[5], cidade1[50] = "Serra";
  float densidade1 = 1.0;
  float pibpercapita1 = 1.1;

     //Informações de variáveis da Cidade 2
  unsigned long int populacao2, turismo2 = 30;  
  float area2, pib2 = 233.75;
  char estado2 = 'H';
  char codigo2[5], cidade2[50] = "Rio";
  float densidade2 = 2.0;
  float pibpercapita2 = 21.1;
  
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

  //Calcular a Densidade Populacional = População / Área 
  densidade1 = populacao1 / area1;  

  //Calcular Pib per Capita = PIB / população
  pibpercapita1 = pib1 / populacao1; 


  //Calcular o Super Poder somando todos atributos numéricos
  float superpoder1 = 
    (float)populacao1 + 
    area1 + 
    pib1 + 
    turismo1 + 
    pibpercapita1 + 
    ((float)1 / densidade1);

    //Dados da Cidade 2

  printf("\nDigite a inicial do seu estado: ");
  scanf(" %c" ,&estado2);

  printf("Digite o código da carta: ");
  scanf("%s" ,codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s" ,cidade2);

  printf("Digite a população da cidade: ");
  scanf(" %d" ,&populacao2);

  printf("Digite a área da cidade em km²:");
  scanf(" %f" ,&area2);

  printf("Digite o PIB da cidade:");
  scanf(" %f" ,&pib2);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf(" %d" ,&turismo2);


  //Calcular a Densidade Populacional = População / Área 
  densidade2 = populacao2 / area2;  

  //Calcular Pib per Capita = PIB / população
  pibpercapita2 = pib2 / populacao2; 

  //Calcular o Super Poder somando todos atributos numéricos
  float superpoder2 = 
     (float)populacao2 + 
     area2 + 
     pib2 + 
     turismo2 + 
     pibpercapita2 + 
     ((float) 1 / densidade2);



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

  //Imprimir resultado das novas variáveis: Densidade Populacional e Pib per Capita
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f \n", pibpercapita1);

  //Imprimir dados do Super Poder
  printf("O Super Poder é: %f\n", superpoder1);

  
     //Imprimir os dados da Cidade 2

  printf("\n - Carta 2 -\n");
  printf("Estado: %c\n" ,estado2);
  printf("Código: %s\n" ,codigo2);
  printf("Nome da Cidade: %s\n" ,cidade2);
  printf("População: %d\n" ,populacao2);
  printf("Área: %.2f km²\n" ,area2);
  printf("PIB: %.2f bilhões de reais\n" ,pib2);
  printf("Número de Pontos Turísticos: %d\n" ,turismo2);

  //Imprimir resultado das novas variáveis: Densidade Populacional e Pib per Capita
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f \n", pibpercapita2);

  //Imprimir dados do Super Poder
  printf("O Super Poder é: %f\n", superpoder2);

 //Área de comparação de atributos das Cartas
  int resultadopopulacao = populacao1 >= populacao2;
  int resultadoarea = area1 >= area2;
  int resultadopib = pib1 >= pib2;
  int resultadoturismo = turismo1 >= turismo2;
  int resultadodensidade = densidade1 <= densidade2;
  int resultadopibpercapita = pibpercapita1 >= pibpercapita2;
  int resultadosuperpoder = superpoder1 >= superpoder2;


 //Imprimir resultado da Comparação
  printf("\n- Comparação de Cartas -\n"); 
  printf("Carta 1 Venceu %d\n", resultadopopulacao);
  printf("Carta 1 Venceu %d\n", resultadoarea);
  printf("Carta 1 Venceu %d\n", resultadopib);
  printf("Carta 1 Venceu %d\n", resultadoturismo);
  printf("Carta 1 Venceu %d\n", resultadodensidade);
  printf("Carta 1 Venceu %d\n", resultadopibpercapita);
  printf("Carta 1 Venceu %d\n", resultadosuperpoder);    
  




 return 0;
} 

