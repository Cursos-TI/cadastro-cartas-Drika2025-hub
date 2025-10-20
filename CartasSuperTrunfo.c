#include <stdio.h>

int main() {
    char estado[30];
    char codigo[4];
    char cidade[30];
    int populacao;
    int pontosTuristicos;
    float area;
    double pib;

    // Carta 1
    printf("Carta 1\n");
    printf("Digite o nome do Estado: ");
    scanf("%s", estado);
    printf("Digite o código da carta: ");
    scanf("%s", codigo);
    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%lf", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    // Carta 2
    printf("\nCarta 2\n");
    printf("Digite o nome do Estado: ");
    scanf("%s", estado);
    printf("Digite o código da carta: ");
    scanf("%s", codigo);
    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%lf", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}
   
