#include <stdio.h>

int main(){

        //Variável codcarta receberá 2 caracteres, mas precisa reservar 3 pq com 2 gerou bug

        //Variáveis da primeira carta:
    int carta1 = 1, ptturistico1;
    char estado1, codcarta1[3], cidade1[30];
    float area1f, pib1f, densidade1f, pperc1f, superpoder1f;
    unsigned long int populacao1;

        //Variáveis da segunda carta:
    int carta2 = 2, ptturistico2;
    char estado2, codcarta2[3], cidade2[30];
    float area2f, pib2f, densidade2f, pperc2f, superpoder2f;
    unsigned long int populacao2;

        //Coleta de informações da primeira carta:
    printf("Informe a letra do Estado da primeira carta (entre 'A' e 'H'):\n");
    scanf("%c", &estado1);
    printf("Informe o código da carta (entre 01 e 04):\n");
    scanf("%s", &codcarta1);
    printf("Informe o nome da Cidade da carta (ex.: SP, RJ...):\n");
    scanf("%s", &cidade1);
    printf("Informe o número de habitantes da Cidade:\n");
    scanf(" %u", &populacao1);
    printf("Informe a área da Cidade em Quilômetros Quadrados:\n");
    scanf("%f", &area1f);
    printf("Informe o Produto Interno Bruto da Cidade:\n");
    scanf("%f", &pib1f);
    printf("Informe a quantidade de pontos turísticos da Cidade:\n");
    scanf("%d", &ptturistico1);
    densidade1f = (float) populacao1 / area1f;
    //Multiplicação do PIB para bilhão antes da divisão populacional
    pperc1f = (float) (pib1f * 1000000000) / populacao1;
    //Super Poder da carta 1
    superpoder1f = (float) (populacao1 + area1f + pib1f + ptturistico1 + pperc1f) - densidade1f;

        //Coleta de informações da segunda carta:
    printf("Informe a letra do Estado da segunda carta (entre 'A' e 'H'):\n");
        //Espaço antes do %c necessário para não gerar bug da linguagem
    scanf(" %c", &estado2);
    printf("Informe o código da carta (entre 01 e 04):\n");
    scanf("%s", &codcarta2);
    printf("Informe o nome da Cidade da carta (ex.: RJ, SP...):\n");
    scanf("%s", &cidade2);
    printf("Informe o número de habitantes da Cidade:\n");
    scanf("%u", &populacao2);
    printf("Informe a área da Cidade em Quilômetros Quadrados:\n");
    scanf("%f", &area2f);
    printf("Informe o Produto Interno Bruto da Cidade:\n");
    scanf("%f", &pib2f);
    printf("Informe a quantidade de pontos turísticos da Cidade:\n");
    scanf("%d", &ptturistico2);
    densidade2f = (float) populacao2 / area2f;
    //Multiplicação do PIB para bilhão antes da divisão populacional
    pperc2f = (float) (pib2f * 1000000000) / populacao2;
    //Super Poder da carta 2
    superpoder2f = (float) (populacao2 + area2f + pib2f + ptturistico2 + pperc2f) - densidade2f;

    //Saída de informações das cartas:
    printf("\nCarta %i:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %u\nÁrea: %.2f km²\nPIB: %.2f Bilhões de Reais\nNúmero de Pontos Turísticos: %i\nDensidade Populacional: %.2f hab/Km²\nPIB per Capta: %.2f Reais\n\n", 
        carta1, estado1, estado1, codcarta1, cidade1, populacao1, area1f, pib1f, ptturistico1, densidade1f, pperc1f);
    printf("Carta %i:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %u\nÁrea: %.2f km²\nPIB: %.2f Bilhões de Reais\nNúmero de Pontos Turísticos: %i\nDensidade Populacional: %.2f hab/Km²\nPIB per Capta: %.2f Reais\n\n", 
        carta2, estado2, estado2, codcarta2, cidade2, populacao2, area2f, pib2f, ptturistico2, densidade2f, pperc2f);

    //Comparação entre as cartas
    printf("Comparação de Cartas:\nPopulação: Carta %d venceu (%d)\nÁrea: Carta %d venceu (%d)\nPIB: Carta %d venceu (%d)\nPontos Turísticos: Carta %d venceu (%d)\nDensidade Populacional: Carta %d venceu (%d)\nPIB per Capta: Carta %d venceu (%d)\nSuper Poder: Carta %d venceu (%d)\n\n",
        (populacao1 < populacao2) + 1, populacao1 > populacao2,
        (area1f < area2f) + 1, area1f > area2f,
        (pib1f < pib2f) + 1, pib1f > pib2f,
        (ptturistico1 < ptturistico2) + 1, ptturistico1 > ptturistico2,
        (densidade1f > densidade2f) + 1, densidade1f < densidade2f,
        (pperc1f < pperc2f) + 1, pperc1f > pperc2f,
        (superpoder1f < superpoder2f) + 1, superpoder1f > superpoder2f);

    //Exibição do PIB per capto
    printf("Comparação de cartas (atributo PIB per capto):\nCarta %i - %s: %.2f Reais\nCarta %i - %s: %.2f\n Reais", carta1, cidade1, pperc1f, carta2, cidade2, pperc2f);
    //Determinando a carta vencedora através do PIB per capto
    if (pperc1f > pperc2f){
        printf("Resultado: Carta %d (%s) venceu!\n", carta1, cidade1);
    } else {
        printf("Resultado: Carta %d (%s) venceu!\n", carta2, cidade2);
    }


    return 0;
    
}
