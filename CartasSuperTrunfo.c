#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    char estado; 
    char novo;
    char codigo[20], cidade[20], codigo2[20], cidade2[20];
    int populacao, pontos, populacao2, pontos2;
    float area, pib, area2, pib2;

  // Área para entrada de dados

    printf("Digite uma letra de A a H: \n");
    scanf("%c", &estado);
    printf("Digite um codigo para a cidade acrescido da letra que voce escolheu: \n");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao);
    printf("Digite a area em KM: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontos);

    printf("Digite outra letra de A a H: \n");
    scanf(" %c", &novo);
    printf("Digite um codigo para a cidade acrescido da letra que voce escolheu: \n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao2);
    printf("Digite a area em KM: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
    printf("Carta 1: \n");
    printf("Estado: %c \nCodigo: %s \nNome da cidade: %s \n", estado, codigo, cidade);
    printf("Area: %fKm \nPib: %f bilhoes de reais \nNumero de pontos turisticos: %d \n", area, pib, pontos);

    printf("Carta 2: \n");
    printf("Estado: %c \nCodigo: %s \nNome da cidade: %s \n", novo, codigo2, cidade2);
    printf("Area: %fKm \nPib: %f bilhoes de reais \nNumero de pontos turisticos: %d \n", area2, pib2, pontos2);

return 0;
} 
