#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int comparar(float a, float b, int menorVence) {
    return (menorVence * (a < b)) + (!menorVence * (a > b));
}

int main() {
    char estado1, cdCarta1[4], nmCidade1[100];
    unsigned long int populacao1;
    float areaKm21, pib1, densidade1, pibPerCapita1, superPoder1;
    int pontosTuristicos1;

    char estado2, cdCarta2[4], nmCidade2[100];
    unsigned long int populacao2;
    float areaKm22, pib2, densidade2, pibPerCapita2, superPoder2;
    int pontosTuristicos2;

    printf("Bem vindo ao Super Trunfo!\n");

    printf("Por favor informe os dados da Carta 1. \n");

    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado1);
    getchar();

    printf("Código da Carta (Número de 01 a 04): ");
    scanf("%s", cdCarta1);
    getchar();

    printf("Nome da Cidade: ");
    fgets(nmCidade1, 100, stdin);
    nmCidade1[strcspn(nmCidade1, "\n")] = 0;

    printf("População: ");
    scanf("%lu", &populacao1);
    getchar();

    printf("Área da Cidade: ");
    scanf("%f", &areaKm21);
    getchar();

    printf("PIB: ");
    scanf("%f", &pib1);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar();

    densidade1 = (float)populacao1 / areaKm21;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + areaKm21 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    printf("\nCarta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cdCarta1);
    printf("Nome da Cidade: %s\n", nmCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaKm21);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    printf("Por favor informe os dados da Carta 2. \n");

    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Código da Carta (Número de 01 a 04): ");
    scanf("%s", cdCarta2);
    getchar();

    printf("Nome da Cidade: ");
    fgets(nmCidade2, 100, stdin);
    nmCidade2[strcspn(nmCidade2, "\n")] = 0;

    printf("População: ");
    scanf("%lu", &populacao2);
    getchar();

    printf("Área da Cidade: ");
    scanf("%f", &areaKm22);
    getchar();

    printf("PIB: ");
    scanf("%f", &pib2);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar();

    densidade2 = (float)populacao2 / areaKm22;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + areaKm22 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    printf("\nCarta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cdCarta2);
    printf("Nome da Cidade: %s\n", nmCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaKm22);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    printf("Comparação de Cartas:\n\n");
    printf("População: Carta 1 venceu (%d)\n", comparar((float)populacao1, (float)populacao2, 0));
    printf("Área: Carta 1 venceu (%d)\n", comparar(areaKm21, areaKm22, 0));
    printf("PIB: Carta 1 venceu (%d)\n", comparar(pib1, pib2, 0));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", comparar((float)pontosTuristicos1, (float)pontosTuristicos2, 0));
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", comparar(densidade1, densidade2, 1)); 
    printf("PIB per Capita: Carta 1 venceu (%d)\n", comparar(pibPerCapita1, pibPerCapita2, 0));
    printf("Super Poder: Carta 1 venceu (%d)\n", comparar(superPoder1, superPoder2, 0));

    return 0;
}
