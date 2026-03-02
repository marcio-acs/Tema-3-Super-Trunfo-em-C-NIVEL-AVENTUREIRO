#include <stdio.h>


int main(){
    // declaração das variavéis de ambas as cartas
    char nome_pais1[15] = "Brasil", nome_pais2[15] = "EUA";
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_pontos_turisticos1, numero_pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1,  pib_per_capita2;
    float super_poder1, super_poder2;
    int opcao;

    // os dados das cartas são os mesmos que estã como exemplo no desafio
    // dados da carta 1
    populacao1 = 12325000;
    area1 = 1521.11;
    pib1 = 699.28;
    numero_pontos_turisticos1 = 50;
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) pib1 / populacao1;
    super_poder1 = (float) populacao1 + area1 + pib1 + (1.0 / densidade_populacional1) + numero_pontos_turisticos1 + pib_per_capita1;

    // dados da carta 2
    populacao2 = 6748000;
    area2 = 1200.25;
    pib2 = 300.50;
    numero_pontos_turisticos2 = 30;
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;
    super_poder2 = (float) populacao2 + area2 + pib2 + (1.0 / densidade_populacional2) + numero_pontos_turisticos2 + pib_per_capita2;

    // menu interativo
    printf("Digite o atributo que quer comparar.\n");
    printf("1 - Populacao\n");
    printf("2 - Área\n");
    printf("3 - Pib\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - Pib per capita\n");
    printf("7 - Super poder\n");
    scanf("%d", &opcao);
    
    // imprime o nome do pais das cartas
    printf("Carta 1 - %s\n", nome_pais1);
    printf("Carta 2 - %s\n", nome_pais2);

    // implementação do switch
    // cada switch tem if encadeado
    switch (opcao)
    {
    case 1:
        printf("Atributo População.\n");
        printf("Carta 1 - População: (%d)\n", populacao1);
        printf("Carta 2 - População: (%d)\n", populacao2);
        if (populacao1 > populacao2){
            printf("Carta 1 - (%s) Venceu!\n", nome_pais1);
        } else if (populacao1 < populacao2){
            printf("Carta 2 - (%s) Venceu\n", nome_pais2);
        } else {
            printf("Empate\n");
        }
        break;
    case 2:
         printf("Atributo Área.\n");
        printf("Carta 1 - Área: (%.2f)\n", area1);
        printf("Carta 2 - Área: (%.2f)\n", area2);
        if (area1 > area2){
            printf("Carta 1 - (%s) Venceu!\n", nome_pais1);
        } else if (area1 < area2){
            printf("Carta 2 - (%s) Venceu\n", nome_pais2);
        } else {
            printf("Empate\n");
        }
        break;
    case 3:
         printf("Atributo Pib.\n");
        printf("Carta 1 - Pib: (%.2f)\n", pib1);
        printf("Carta 2 - Pib: (%.2f)\n", pib2);
        if (pib1 >pib2){
            printf("Carta 1 - (%s) Venceu!\n", nome_pais1);
        } else if (pib1 < pib2){
            printf("Carta 2 - (%s) Venceu\n", nome_pais2);
        } else {
            printf("Empate\n");
        }
        break;
     case 4:
        printf("Atributo Número de pontos turísticos.\n");
        printf("Carta 1 - Número de pontos turísticos: (%d)\n", numero_pontos_turisticos1);
        printf("Carta 2 - Número de pontos turísticos: (%d)\n", numero_pontos_turisticos2);
        if (numero_pontos_turisticos1 > numero_pontos_turisticos2){
            printf("Carta 1 - (%s) Venceu!\n", nome_pais1);
        } else if (numero_pontos_turisticos1 < numero_pontos_turisticos2){
            printf("Carta 2 - (%s) Venceu\n", nome_pais2);
        } else {
            printf("Empate\n");
        }
        break;
    case 5:
        printf("Atributo Densidade populaciona.\n");
        printf("Carta 1 - Densidade populaciona: (%.2f)\n", densidade_populacional1);
        printf("Carta 2 - Densidade populaciona: (%.2f)\n", densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2){
            printf("Carta 1 - (%s) Venceu!\n", nome_pais1);
        } else if (densidade_populacional1 > densidade_populacional2){
            printf("Carta 2 - (%s) Venceu\n", nome_pais2);
        } else {
            printf("Empate\n");
        }
        break;
    case 6:
        // esta com problema em imprimir o valor do pib_per_capita e não descobri o motivo, aparece 0.00
        printf("Atributo Pib per capita.\n");
        printf("Carta 1 - Pib per capita: (%.2f)\n", pib_per_capita1);
        printf("Carta 2 - Pib per capita: (%.2f)\n", pib_per_capita2);
        if (pib_per_capita1 > pib_per_capita2){
            printf("Carta 1 - (%s) Venceu!\n", nome_pais1);
        } else if (pib_per_capita1 < pib_per_capita2){
            printf("Carta 2 - (%s) Venceu\n", nome_pais2);
        } else {
            printf("Empate\n");
        }
        break;
    case 7:
        printf("Atributo Super poder.\n");
        printf("Carta 1 - Super poder: (%.2f)\n", super_poder1);
        printf("Carta 2 - Super poder: (%.2f)\n", super_poder2);
        if (super_poder1 > super_poder2){
            printf("Carta 1 - (%s) Venceu!\n", nome_pais1);
        } else if (super_poder1 < super_poder2){
            printf("Carta 2 - (%s) Venceu\n", nome_pais2);
        } else {
            printf("Empate\n");
        }
        break;
    default:
        printf("Opção inválida");
        break;
    }

    return 0;
}
