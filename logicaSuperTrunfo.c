#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
            char estado1[2], estado2[2] ;
            char codigo_da_carta1[4], codigo_da_carta2[4] ;
            char nome_da_cidade1[30],nome_da_cidade2[30] ;
            unsigned long int populacao1,populacao2 ;
            float area1,area2 ;
            float pib1,pib2 ;
            int pontos_turisticos1,pontos_turisticos2 ;
            float densidade_populacional1,densidade_populacional2;
            float pib_per_capita1,pib_per_capita2; 
        

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
                     //Entrada dos dados da primeira carta//
                printf("\n--- Digite os dados da primeira carta---\n");
                printf("Digite o estado (A-h): \n");
                scanf( "%s", estado1);

                printf("Digite o código da carta (01-04): \n");
                scanf("%s", codigo_da_carta1);

                printf("Digite o nome da cidade: \n");
                scanf("%s", nome_da_cidade1);

                printf("Digite o número da população: \n");
                scanf("%lu", &populacao1);

                printf("Digite a área (em km²): \n");
                scanf("%f", &area1);

                printf("Digite o PIB (em milhões): \n");
                scanf( "%f", &pib1);

                printf("Digite o número de pontos turisticos: \n");
                scanf("%d", &pontos_turisticos1);
                                //Calculos da primeira carta
                densidade_populacional1 = (area1 !=0) ? populacao1 / area1 : 0;
                pib_per_capita1 = (populacao1 !=0) ? pib1 / populacao1 : 0;
                                //Entrada dos dados da segunda carta//
                printf("\n--- Digite os dados da segunda carta---\n");
                printf("Digite o estado (A-h): \n");
                scanf( "%s", estado2);

                printf("Digite o código da carta (01-04): \n");
                scanf("%s", codigo_da_carta2);

                printf("Digite o nome da cidade: \n");
                scanf("%s", nome_da_cidade2);

                printf("Digite o número da população: \n");
                scanf("%lu", &populacao2);

                printf("Digite a área (em km²): \n");
                scanf("%f", &area2);

                printf("Digite o PIB (em milhões): \n");
                scanf( "%f", &pib2);

                printf("Digite o número de pontos turisticos: \n");
                scanf("%d", &pontos_turisticos2);
                //Calculos da segunda  carta
                densidade_populacional2 = (area2 !=0) ? populacao2 / area2 : 0;
                pib_per_capita2 = (populacao2 !=0) ? pib2 / populacao2 : 0;


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
        if ( populacao1 > populacao2){
            printf("Cidade 1 tem maior população.\n");
        } else {
            printf("Cidade 2 tem maior população.\n");
        }
               if ( area1 > area2){
            printf("Cidade 1 tem maior área.\n");
        } else {
            printf("Cidade 2 tem maior área.\n");
        }
               if ( pib1 > pib2){
            printf("Cidade 1 tem maior PIB.\n");
        } else {
            printf("Cidade 2 tem maior PIB.\n");
        }
               if ( pontos_turisticos1 > pontos_turisticos2){
            printf("Cidade 1 tem mais pontos turísticos.\n");
        } else {
            printf("Cidade 2 tem mais pontos turísticos.\n");
        }
                if ( densidade_populacional1 < densidade_populacional2){
            printf("Cidade 1 ganha na densidade populacional.\n");
        } else {
            printf("Cidade 2 ganha na densidade populacional.\n");
        }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    printf("\nCarta 1 - ");
    printf("Estado: %s,",nome_da_cidade1);
    printf(" Código: %s%s,",estado1,codigo_da_carta1);
    printf(" População: %lu\n",populacao1);
    printf("Carta 2 - ");
    printf("Estado: %s,",nome_da_cidade2);
    printf(" Código: %s%s,",estado1,codigo_da_carta2);
    printf(" População: %lu\n",populacao2);
    printf("Resultado:");
    if ( populacao1 > populacao2){
        printf(" Cidade 1 é a vencedora!\n");
    } else {
        printf(" Cidade 2 é a vencedora!\n");
    }
    printf("\nCarta 1 - ");
    printf("Estado: %s,",nome_da_cidade1);
    printf(" Código: %s%s,",estado1,codigo_da_carta1);
    printf(" Área: %.2f km²\n",area1);
    printf("Carta 2 - ");
    printf("Estado: %s,",nome_da_cidade2);
    printf(" Código: %s%s,",estado1,codigo_da_carta2);
    printf(" Área: %.2f km²\n",area2);
    printf("Resultado:");
    if ( area1 > area2){
        printf(" Cidade 1 é a vencedora!\n");
    } else {
        printf(" Cidade 2 é a vencedora!\n");
    
    }
    printf("\nCarta 1 - ");
    printf("Estado: %s,",nome_da_cidade1);
    printf(" Código: %s%s,",estado1,codigo_da_carta1);
    printf("PIB: %.2f milhões\n",pib1);
    printf("Carta 2 - ");
    printf("Estado: %s,",nome_da_cidade2);
    printf(" Código: %s%s,",estado1,codigo_da_carta2);
    printf("PIB: %.2f milhões\n",pib2);
    printf("Resultado:");
    if ( pib1 > pib2){
        printf(" Cidade 1 é a vencedora!\n");
    } else {
        printf(" Cidade 2 é a vencedora!\n");
    }






    

        
    return 0;
}
