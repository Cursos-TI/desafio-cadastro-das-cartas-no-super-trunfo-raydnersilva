#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

void entradaDados(int id) {
    char estado;
    char cdCarta[4];
    char nmCidade[100];
    int populacao;
    float areaKm2;
    float pib;
    int pontosTuristicos;
    char quebraLinha;

    printf("Por favor informe os dados da Carta %d. \n", id);

    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado);
    getchar();

    printf("Código da Carta (Número de 01 a 04): ");
    scanf("%s", cdCarta);
    getchar();

    printf("Nome da Cidade: ");
    fgets(nmCidade, 100, stdin);
    nmCidade[strcspn(nmCidade, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao);
    getchar();

    printf("Área da Cidade: ");
    scanf("%f", &areaKm2);
    getchar();

    printf("PIB: ");
    scanf("%f", &pib);
    getchar();

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);
    getchar();

    float densidade = (float)populacao / areaKm2; 
    float pibPerCapita = (pib * 1000000000) / populacao;

    printf("\nCarta %d:\n\n", id);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cdCarta);
    printf("Nome da Cidade: %s\n", nmCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita);
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Bem vindo ao Super Trunfo! \n");

    entradaDados(1);
    entradaDados(2);
    return 0;
}
