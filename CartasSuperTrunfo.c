#include <stdio.h>

int main(){
    char carta1[50] = "1", estado[50], codigo[50], nome_cidade[50];
    int populacao, pontos_turisticos;
    float area, pib;

    char carta2[50] = "2", estado2[50], codigo2[50], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    
    printf("Carta %s\n", carta1);
    printf("Digite o Estado: ");
    scanf("%s", estado);
    printf("Digite o Código: ");
    scanf("%s", codigo);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome_cidade);
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao);
    printf("Digite a área em km²: ");
    scanf("%f", &area);
    printf("Digite o Pib: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("\nCarta %s\n", carta2);
    printf("Digite o Estado: ");
    scanf("%s", estado2);
    printf("Digite o Código: ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome_cidade2);
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o Pib: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    float densidade_pop = (float) (populacao / area);
    float pib_percapita = (float) (pib / populacao);
    float densidade_pop2 = (float) (populacao2 / area2);
    float pib_percapita2 = (float) (pib2 / populacao2);
    float diferenca = (float)(densidade_pop - densidade_pop2);
    float diferenca2 = (float)(densidade_pop2 - densidade_pop);
    
    printf("\n------------Jogo Super Trunfo------------\n");
    printf("\n------------Partida iniciada------------\n");

    printf("\nCarta: %s \n", carta1);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional é: %f\n", densidade_pop);
    printf("Pib percapita é: %f\n", pib_percapita);

    printf("\nCarta: %s \n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional é: %f\n", densidade_pop2);
    printf("Pib percapita é: %f\n", pib_percapita2);

    printf("\n----------Inicio da Batalha------------\n");

    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");

    printf("\nCarta %s - %s (%s): %f\n", carta1, nome_cidade, estado, densidade_pop);
    printf("Carta %s - %s (%s): %f\n", carta2, nome_cidade2, estado2, densidade_pop2);
    if (densidade_pop < densidade_pop2) {
        printf("Carta %s (%s) venceu!\n", carta1, nome_cidade);
    } else {
        printf("Carta %s (%s) venceu!\n", carta2, nome_cidade2);
    }

    return 0;

}