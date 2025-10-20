#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[30];        // Ex: "Ceara"
    char codigo[4];         // Ex: "A01" (1 letra + 2 números + '\0')
    char cidade[30];        // Ex: "Sobral"
    int populacao;
    int pontosTuristicos;
    float area;
    double pib;
  
  // Área para entrada de dados
  printf("Carta 1\n");
  printf("Digite o nome do Estado: \n");
  scanf("%s", &estado);
  printf("Digite o código da carta: \n");
  scanf("%s", &codigo);
  printf("Digite o nome da Cidade: \n");
  scanf("%s", &cidade);
  printf("Digite a população: \n");
  scanf("%d", &populacao);
  printf("Digite a área: \n");
  scanf("%e", &area);
  printf("Digite o PIB: \n");
  scanf("%f", &pib);
  printf("Digite o número de pontos Turisticos: \n");
  scanf("%d", &pontosTuristicos);
  
    // Área para exibição dos dados da cidade
  printf("Carta 1\n");
  printf("Nome do Estado: %s\n");
  printf("Código da carta: %s\n");
  printf("Nome da Cidade: %s\n");
  printf("População: %d\n");
  printf("Área: %e\n");
  printf("PIB: %f\n");
  printf("Pontos turisticos: %d\n");

    // Área para entrada de dados
  printf("Carta 2\n");
  printf("Digite o nome do Estado: \n");
  scanf("%s", &estado);
  printf("Digite o código da carta: \n");
  scanf("%s", &codigo);
  printf("Digite o nome da Cidade: \n");
  scanf("%s", &cidade);
  printf("Digite a população: \n");
  scanf("%d", &populacao);
  printf("Digite a área: \n");
  scanf("%e", &area);
  printf("Digite o PIB: \n");
  scanf("%f", &pib);
  printf("Digite o número de pontos turisticos: \n");
  scanf("%d", &pontosTuristicos);
  
    // Área para exibição dos dados da cidade
  printf("Carta 2\n");
  printf("Nome do Estado: %s\n");
  printf("Código da carta: %s\n");
  printf("Nome da Cidade: %s\n");
  printf("População: %d\n");
  printf("Área: %e\n");
  printf("PIB: %f\n");
  printf("Pontos turisticos: %d\n");
  
return 0;
} 
