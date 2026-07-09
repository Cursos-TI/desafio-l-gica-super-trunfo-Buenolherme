#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Nível Aventureiro
// Este programa compara duas cartas usando um menu interativo com switch.

int main() {
    // Dados pré-definidos da Carta 1
    char nomePais1[50] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.00;
    float pib1 = 2170.00;
    int pontosTuristicos1 = 35;
    float densidadeDemografica1;

    // Dados pré-definidos da Carta 2
    char nomePais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.00;
    float pib2 = 640.00;
    int pontosTuristicos2 = 28;
    float densidadeDemografica2;

    // Variável que armazena a opção escolhida pelo usuário no menu
    int opcao;

    // Cálculo da densidade demográfica de cada país
    // Fórmula: população dividida pela área
    densidadeDemografica1 = populacao1 / area1;
    densidadeDemografica2 = populacao2 / area2;

    // Exibição das cartas cadastradas
    printf("=== Super Trunfo - Paises ===\n");

    printf("\nCarta 1:\n");
    printf("Pais: %s\n", nomePais1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de dolares\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Demografica: %.2f hab/km2\n", densidadeDemografica1);

    printf("\nCarta 2:\n");
    printf("Pais: %s\n", nomePais2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de dolares\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Demografica: %.2f hab/km2\n", densidadeDemografica2);

    // Menu interativo para escolha do atributo de comparação
    printf("\n=== Menu de Comparacao ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    // Estrutura switch para executar a comparação conforme a opção escolhida
    switch (opcao) {
        case 1:
            printf("\nComparacao de cartas - Atributo: Populacao\n");
            printf("%s: %d habitantes\n", nomePais1, populacao1);
            printf("%s: %d habitantes\n", nomePais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("\nComparacao de cartas - Atributo: Area\n");
            printf("%s: %.2f km2\n", nomePais1, area1);
            printf("%s: %.2f km2\n", nomePais2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("\nComparacao de cartas - Atributo: PIB\n");
            printf("%s: %.2f bilhoes de dolares\n", nomePais1, pib1);
            printf("%s: %.2f bilhoes de dolares\n", nomePais2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("\nComparacao de cartas - Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos turisticos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos turisticos\n", nomePais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("\nComparacao de cartas - Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km2\n", nomePais1, densidadeDemografica1);
            printf("%s: %.2f hab/km2\n", nomePais2, densidadeDemografica2);

            // Na densidade demográfica, vence quem tiver o menor valor.
            if (densidadeDemografica1 < densidadeDemografica2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            } else if (densidadeDemografica2 < densidadeDemografica1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            // Caso o usuário digite uma opção que não existe no menu.
            printf("\nOpcao invalida! Escolha uma opcao entre 1 e 5.\n");
            break;
    }

    return 0;
}