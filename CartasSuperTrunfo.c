#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   // Variáveis da primeira carta:
    char estado1, código1[4], cidade1[50];
    int população1, turismo1;
    float área1, pib1;
   // Variáveis da segunda carta:
    char estado2, código2[4], cidade2[50];
    int população2, turismo2;
    float área2, pib2;
  // Área para entrada de dados
   //Dados da primeira carta:
   printf("=== Primeira Carta ===\n");

   printf("Estado (A-H): ");
   scanf(" %c", &estado1);

   printf("Código da Carta (ex: A01): ");
   scanf("%s", código1);

   printf("Nome da Cidade: ");
   scanf(" %[^\n]", cidade1);

   printf("População: ");
   scanf("%d", &população1);

   printf("Área (em km²): ");
   scanf("%f", &área1);

   printf("PIB (em reais): ");
   scanf("%f", &pib1);

   printf("Pontos Turísticos: ");
   scanf("%d", &turismo1);

  //Dados da segunda carta:
   printf("=== Segunda Carta ===\n");

   printf("Estado (A-H): ");
   scanf(" %c", &estado2);

   printf("Código da Carta (ex: B02): ");
   scanf("%s", código2);

   printf("Nome da Cidade: ");
   scanf(" %[^\n]", cidade2);

   printf("População: ");
   scanf("%d", &população2);

   printf("Área (em km²): ");
   scanf("%f", &área2);

   printf("PIB (em reais): ");
   scanf("%f", &pib2);

   printf("Pontos Turísticos: ");
   scanf("%d", &turismo2);
  // Área para exibição dos dados da cidade
   printf("\n\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", código1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Área: %.2f km²\n", área1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", turismo1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", código2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2f km²\n", área2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", turismo2);
return 0;
} 
