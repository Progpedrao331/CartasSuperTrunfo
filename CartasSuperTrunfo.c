#include <stdio.h>

int main(){
    char estado[50], codigo[50], nome_cidade[50];
    int populacao, pontos_turisticos;
    float area, pib;

    char estado2[50], codigo2[50], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    printf("--------------Desafio Cartas Super Trunfo-------------\n");
    
    printf("\n");

    printf("Carta 1: \n");
    printf("Digite o Estado: ");
    scanf("%s", &estado);
    printf("Digite o Código: ");
    scanf("%s", &codigo);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nome_cidade);
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao);
    printf("Digite a área em km²: ");
    scanf("%f", &area);
    printf("Digite o Pib: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("\n");

    printf("Carta 2: \n");
    printf("Digite o Estado: ");
    scanf("%s", &estado2);
    printf("Digite o Código: ");
    scanf("%s", &codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nome_cidade2);
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o Pib: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

    return 0;

}