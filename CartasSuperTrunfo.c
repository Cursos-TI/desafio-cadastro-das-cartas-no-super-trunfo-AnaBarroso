#include <stdio.h>

int main(){
    char estado[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
    printf("Digite o nome do estado:");
    scanf ("%49s",estado);

    printf("Digite o nome da cidade:");
    scanf ("%49s",cidade);

    printf("Digite a populacao:");
    scanf("%d",&populacao);

    printf("Digite a area:");
    scanf("%f",&area);

    printf("Digite o pib:");
    scanf("%f",&pib);

    printf("Digite o nome de pontos turisticos:");
    scanf("%d", &pontos_turisticos);
    
     printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);

    return 0;
}
