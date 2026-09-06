#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Novato com If-Else

int main (){

//Variáveis da Primeira Carta //
char estado1[10], codigo1[5], cidade1[10] = "BA";
int populacao1, turismo1 = 100;
float area1, pib1 = 50.5;

//Variáveis da Segunda Carta//
char estado2[10], codigo2[5], cidade2[10] = "AC";
int populacao2, turismo2 = 200;
float area2, pib2 = 70.5;


//Entrada de dados da primeira carta//
printf("Digite a sigla do estado\n");
scanf ("%s", &estado1);

printf("Digite o código da carta\n");
scanf ("%s", &codigo1);

printf("Digite o nome da cidade\n");
scanf ("%s", &cidade1);

printf("Digite a população\n");
scanf (" %d", &populacao1);

printf("Digite a área\n");
scanf ( " %f", &area1);

printf("Digite o PIB\n");
scanf ("%f", &pib1);

printf("Digite a quantidade de pontos turísticos\n");
scanf ("%d", &turismo1);

//Densidade Populacional da primeira carta//
float densidade1 = populacao1 / area1;
//PIB per Capita da primeira carta//
float pibpercapita1 = pib1 / populacao1;


//Área para a impressão dos dados da primeira carta//
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de pontos turísticos: %d\n", turismo1);

printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per capita: %.2f:\n", pibpercapita1);


//Entrada de dados da segunda carta//
printf("Digite a sigla do estado\n");
scanf ("%s", &estado2);

printf("Digite o código da carta\n");
scanf ("%s", &codigo2);

printf("Digite o nome da cidade\n");
scanf ("%s", &cidade2);

printf("Digite a população\n");
scanf ("%d", &populacao2);

printf("Digite a área\n");
scanf ("%f", &area2);

printf("Digite o PIB\n");
scanf ("%f", &pib2);

printf("Digite a quantidade de pontos turísticos\n");
scanf ("%d", &turismo2);

//Densidade Populacional da segunda carta//
float densidade2 = populacao2 / area2;
//PIB per Capita da segunda carta//
float pibpercapita2 = pib2 / populacao2;


//Área para a impressão dos dados da segunda carta//
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de pontos turísticos: %d\n", turismo2);

printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per capita: %.2f\n", pibpercapita2);


//Comparação das Cartas//

printf("\nComparação de cartas (Atributo: População)\n");
printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

//Comparação usando if-else//
if (populacao1 > populacao2){
  printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
} else
  printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);




return 0;
}
