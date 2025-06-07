#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// Desafio: Nível Novato - Concluído (Luann - 04/06/2025)
// - Criadas as entradas e saídas de dados para 2 cartas.

// Desafio: Nível Aventureiro - Concluído (Luann - 05/06/2025)
// - Criadas duas novas variáveis para armazenar a densidade populacional e o PIB per capita.
// - Adicionados os cálculos correspondentes para a densidade populacional e o PIB per capita.

// Desafio: Nível Mestre – Concluído (Luann – 06/06/2025)
// - As variáveis populacaoCarta1 e populacaoCarta2 foram alteradas de int para unsigned long int, e os especificadores de formato %d foram ajustados para %lu.
// - Criada a variável inversoDensidade para armazenar o inverso da densidade populacional da carta, usada no cálculo do superpoder.
// - Criada a variável superPoder, que armazena a soma dos atributos que compõem o superpoder da carta.
// - Implementada a seção de comparação entre os atributos das cartas.
// - Criada também uma seção para imprimir os resultados das comparações.

int main() {
    // Variáveis para a primeira carta, usando a convenção camelCase
    char estadoCarta1, codigoCarta1[10], nomeCidadeCarta1[20];
    int numeroPontosTuristicosCarta1;
    unsigned long int populacaoCarta1;
    float areaKm2Carta1, pibCarta1;
    float densidadePopulacionalCarta1, pibPerCapitaCarta1;

    // Entrada de dados para a carta 1
    printf("Responda abaixo, usando o teclado, as informações da 1ª carta:\n");
    printf("Digite a letra que representa o estado ao qual a cidade da carta pertence (ex.: A): ");
    scanf(" %c", &estadoCarta1);
    printf("Digite o código da carta (ex.: A01): ");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade da carta, use apenas cidades com nomes únicos (ex.: Natal, Fortaleza): ");
    scanf("%s", nomeCidadeCarta1);
    printf("Digite o número da população da cidade da carta, usando um número inteiro (ex.: 1000): ");
    scanf("%lu", &populacaoCarta1);
    printf("Digite a área em km² da cidade da carta, usando um número com ponto flutuante (ex.: 5000.00): ");
    scanf("%f", &areaKm2Carta1);
    printf("Digite o PIB da cidade da carta, usando um número com ponto flutuante (ex.: 5000.00): ");
    scanf("%f", &pibCarta1);
    printf("Digite o número de pontos turísticos da cidade da carta, usando um número inteiro (ex.: 20): ");
    scanf("%d", &numeroPontosTuristicosCarta1);

    // Cálculos da densidade populacional e do PIB per capita da carta 1
    densidadePopulacionalCarta1 = (double) populacaoCarta1 / areaKm2Carta1;
    pibPerCapitaCarta1 = pibCarta1 / populacaoCarta1;

    // Cálculo do superpoder da carta 1 e do inverso da densidade populacional
    float inversoDensidadeCarta1 = 1 / densidadePopulacionalCarta1;
    float superPoderCarta1 = (float) populacaoCarta1 + areaKm2Carta1 + pibCarta1 + (float) numeroPontosTuristicosCarta1 + pibPerCapitaCarta1 + inversoDensidadeCarta1;

    // Saída de dados para a carta 1
    printf("\n====================================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta1);
    printf("População: %lu\n", populacaoCarta1);
    printf("Área: %.2f km²\n", areaKm2Carta1);
    printf("PIB: %.2f bilhões de reais\n", pibCarta1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosCarta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCarta1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaCarta1);
    printf("Super Porder: %.2f\n", superPoderCarta1);

    // Variáveis para a segunda carta, usando a convenção camelCase
    char estadoCarta2, codigoCarta2[10], nomeCidadeCarta2[20];
    int numeroPontosTuristicosCarta2;
    unsigned long int populacaoCarta2;
    float areaKm2Carta2, pibCarta2;
    float densidadePopulacionalCarta2, pibPerCapitaCarta2;

    // Entrada de dados para a carta 2
    printf("\n");
    printf("Responda abaixo, usando o teclado, as informações da 2ª carta:\n");
    printf("Digite a letra que representa o estado ao qual a cidade da carta pertence (ex.: A): ");
    scanf(" %c", &estadoCarta2);
    printf("Digite o código da carta (ex.: A01): ");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade da carta, use apenas cidades com nomes únicos (ex.: Natal, Fortaleza): ");
    scanf("%s", nomeCidadeCarta2);
    printf("Digite o número da população da cidade da carta, usando um número inteiro (ex.: 1000): ");
    scanf("%lu", &populacaoCarta2);
    printf("Digite a área em km² da cidade da carta, usando um número com ponto flutuante (ex.: 5000.00): ");
    scanf("%f", &areaKm2Carta2);
    printf("Digite o PIB da cidade da carta, usando um número com ponto flutuante (ex.: 5000.00): ");
    scanf("%f", &pibCarta2);
    printf("Digite o número de pontos turísticos da cidade da carta, usando um número inteiro (ex.: 20): ");
    scanf("%d", &numeroPontosTuristicosCarta2);

    // Cálculos da densidade populacional e do PIB per capita da carta 1
    densidadePopulacionalCarta2 = (double) populacaoCarta2 / areaKm2Carta2;
    pibPerCapitaCarta2 = pibCarta2 / populacaoCarta2;

    // Cálculo do superpoder da carta 1 e do inverso da densidade populacional
    float inversoDensidadeCarta2 = 1 / densidadePopulacionalCarta2;
    float superPoderCarta2 = (float) populacaoCarta2 + areaKm2Carta2 + pibCarta2 + (float) numeroPontosTuristicosCarta2 + pibPerCapitaCarta2 + inversoDensidadeCarta2;

    // Saída de dados para a carta 2
    printf("\n====================================\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta2);
    printf("População: %lu\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaKm2Carta2);
    printf("PIB: %.2f bilhões de reais\n", pibCarta2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosCarta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCarta2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaCarta2);
    printf("Super Porder: %.2f\n", superPoderCarta2);

    // Comparação entre os atributos das cartas
    int resultadoMaiorPopulacao = populacaoCarta1 > populacaoCarta2;
    int resultadoMaiorAreaKm2 = areaKm2Carta1 > areaKm2Carta2;
    int resultadoMaiorPib = pibCarta1 > pibCarta2;
    int resultadoMaiorNumeroPontosTuristicos = numeroPontosTuristicosCarta1 > numeroPontosTuristicosCarta2;
    int resultadoMenorDensidadepopulacional = densidadePopulacionalCarta1 < densidadePopulacionalCarta2;
    int resultadoMaiorPibPerCapita = pibPerCapitaCarta1 > pibPerCapitaCarta2;
    int resultadoMaiorSuperPoder = superPoderCarta1 > superPoderCarta2;

    // Saída de dados para a comparação entre as cartas
    printf("\n====================================\n");
    printf("Comparando os atributos das cartas (1 = Carta 1 Vence, 0 = Carta 2 Vence):\n");
    printf("População: Carta 1 venceu (%d)\n", resultadoMaiorPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", resultadoMaiorAreaKm2);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoMaiorPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoMaiorNumeroPontosTuristicos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadoMenorDensidadepopulacional);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoMaiorPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoMaiorSuperPoder);

    return 0;
}
