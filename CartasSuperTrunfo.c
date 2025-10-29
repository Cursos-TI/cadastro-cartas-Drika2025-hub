#include <stdio.h>

int main() {

    /*
    Adição (+)
    Divisão (/)
    */
    
    // Variáveis da Carta 1
    char estado1[30], codigo1[4], cidade1[30];
    int pontosTuristicos1;
    unsigned long int populacao1;
    float area1, pib1, divisaodensindade1, divisaopib1, Superpoder1;

    // Variáveis da Carta 2
    char estado2[30], codigo2[4], cidade2[30];
    int pontosTuristicos2;
    unsigned long int populacao2;
    float area2, pib2, divisaodensidade2, divisaopib2, Superpoder2;

    // Variáveis Resultado da comparação
    int ResultadoPopulacao, Resultadoarea, Resultadopib, ResultadoPontosTuristicos, ResultadoPIBpercapita, ResultadoDensidadePopulacional, ResultadoSuperPoder;

    // Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o nome do Estado (sem espaços, use underline): ");
    scanf("%s", estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da Cidade (sem espaços, use underline): ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    divisaodensindade1 = populacao1/area1;
    divisaopib1 = pib1/populacao1;
    Superpoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + divisaopib1 + (1 / divisaodensindade1);

    // Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o nome do Estado (sem espaços, use underline): ");
    scanf("%s", estado2);
    printf("Digite o código da carta (ex: A02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da Cidade (sem espaços, use underline): ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    divisaodensidade2 = populacao2/area2;
    divisaopib2 = pib2/populacao2;
    Superpoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + divisaopib2 + (1 / divisaodensidade2);

    // Comparações
    ResultadoPopulacao = populacao1 > populacao2;
    Resultadoarea = area1 > area2;
    Resultadopib = pib1 > pib2;
    ResultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    ResultadoPIBpercapita = divisaopib1 > divisaopib2;
    ResultadoDensidadePopulacional = divisaodensindade1 < divisaodensidade2; // menor densidade vence
    ResultadoSuperPoder = Superpoder1 > Superpoder2;

    // Exibição dos resultados
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f\n", divisaodensindade1);
    printf("PIB per capita: %.6f\n", divisaopib1);
    printf("Super Poder: %.2f\n", Superpoder1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f\n", divisaodensidade2);
    printf("PIB per capita: %.6f\n", divisaopib2);
    printf("Super Poder: %.2f\n", Superpoder2);

    // Exibição dos resultados das comparações
    printf("\n===== RESULTADO DAS COMPARAÇÕES =====\n");

    printf("População: %s venceu!\n", ResultadoPopulacao ? "Carta 1" : "Carta 2");
    printf("Área: %s venceu!\n", Resultadoarea ? "Carta 1" : "Carta 2");
    printf("PIB: %s venceu!\n", Resultadopib ? "Carta 1" : "Carta 2");
    printf("Pontos Turísticos: %s venceu!\n", ResultadoPontosTuristicos ? "Carta 1" : "Carta 2");
    printf("PIB per Capita: %s venceu!\n", ResultadoPIBpercapita ? "Carta 1" : "Carta 2");
    printf("Densidade Populacional: %s venceu (menor densidade)!\n", ResultadoDensidadePopulacional ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s venceu!\n", ResultadoSuperPoder ? "Carta 1" : "Carta 2");

    return 0;
}
