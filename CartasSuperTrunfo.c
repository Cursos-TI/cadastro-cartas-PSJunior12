#include <stdio.h>

// Desafio Super Trunfo - Países

int main (){

//Variáveis da Primeira Carta //
char pais1[10], codigo1[5], cidade1[10] = "BA";
int populacao1, turismo1 = 100;
float area1, pib1 = 50.5;

//Variáveis da Segunda Carta//
char pais2[10], codigo2[5], cidade2[10] = "AC";
int populacao2, turismo2 = 200;
float area2, pib2 = 70.5;



//Entrada de dados da primeira carta//
printf("Digite o nome do País\n");
scanf ("%s", &pais1);

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
printf("Estado: %s\n", pais1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de pontos turísticos: %d\n", turismo1);

printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per capita: %.2f:\n", pibpercapita1);


//Entrada de dados da segunda carta//
printf("\nDigite o nome do País\n");
scanf ("%s", &pais2);

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
printf("Estado: %s\n", pais2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de pontos turísticos: %d\n", turismo2);

printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per capita: %.2f\n", pibpercapita2);



//Comparação das Cartas//

printf("\nEscolha qual atributo comparar:\n");
printf("1. População\n" 
       "2. Área\n"      
       "3. PIB\n"
       "4. Número de pontos turísticos\n"
       "5. Densidade demográfica\n");


int comparacao;        
scanf("%d", &comparacao);
printf("Carta 1 - %s | Carta 2 - %s\n", pais1, pais2);


//Área para criação do Menu Interativo using Switch e If-else//
switch (comparacao)
{
case 1:
  printf("Você escolheu o atributo: População\n");
  printf("Carta 1 = %d | Carta 2 = %d\n", populacao1, populacao2);
    if (populacao1 > populacao2)
    {
      printf("A Carta 1 venceu!");
    } else if (populacao1 < populacao2)
    {      
      printf("A Carta 2 venceu!");
    } else
    {      
      printf("Empate!");    
    }
    
  break;

case 2:
  printf("Você escolheu o atributo: Área\n");
  printf("Carta 1 = %f | Carta 2 = %f\n", area1, area2);
     if (area1 > area2)
    {
      printf("A Carta 1 venceu!");
    } else if (area1 < area2)
    {      
      printf("A Carta 2 venceu!");
    } else
    {      
      printf("Empate!");    
    }
  
  break;

case 3:
  printf("Você escolheu o atributo: PIB\n");
  printf("Carta 1 = %f | Carta 2 = %f\n", pib1, pib2);
     if (pib1 > pib2)
    {
      printf("A Carta 1 venceu!");
    } else if (pib1 < pib2)
    {      
      printf("A Carta 2 venceu!");
    } else
    {      
      printf("Empate!");    
    }
  break;

case 4:
  printf("Você escolheu o atributo: Número de pontos turísticos\n");
  printf("Carta 1 = %d | Carta 2 = %d\n", turismo1, turismo2);
     if (turismo1 > turismo2)
    {
      printf("A Carta 1 venceu!");
    } else if (turismo1 < turismo2)
    {      
      printf("A Carta 2 venceu!");
    } else
    {      
      printf("Empate!");    
    }
  
  break;

case 5:
  printf("Você escolheu o atributo: Densidade demográfica\n");
  printf("Carta 1 = %f | Carta 2 = %f\n", densidade1, densidade2);
     if (densidade1 > densidade2)
    {
      printf("A Carta 1 venceu!");
    } else if (densidade1 < densidade2)
    {      
      printf("A Carta 2 venceu!");
    } else
    {      
      printf("Empate!");    
    }
    
  break;

default:
  printf("Opção Inválida!");
  break;
}








return 0;
}