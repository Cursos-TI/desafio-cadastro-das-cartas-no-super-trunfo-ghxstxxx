#include <stdio.h>

int main() {

    //carta 1//

    char estado1[20];
    char codigo1[20];
    char cidade1[20];
    int população1;
    float area1;
    float pib1;
    int turismo1;
    
   printf("Digite o nome do estado:\n");
   scanf("%s", estado1);

   printf("Digite o código da carta:\n");
   scanf("%s", &codigo1);

   printf("Digite a cidade:\n");
   scanf("%s", &cidade1);

   printf("Digite a população:\n");
   scanf("%d", &população1);

   printf("Digite a area em km2:\n");
   scanf("%f", &area1);

   printf("Digite o PIB:\n");
   scanf("%f", &pib1);

   printf("Digite os pontos turisticos:\n");
   scanf("%d", &turismo1);

//carta 2//

    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int população2;
    float area2;
    float pib2;
    int turismo2;
        
    printf("Digite o nome do estado:\n");
    scanf("%s", estado2);
 
    printf("Digite o código da carta:\n");
    scanf("%s", &codigo2);
 
    printf("Digite a cidade:\n");
    scanf("%s", &cidade2);
 
    printf("Digite a população:\n");
    scanf("%d", &população2);
 
    printf("Digite a area em km2:\n");
    scanf("%f", &area2);

    // DADOS DAS CARTAS //

   // CARTA 1 //
   
    printf("Estado: %c\n", estado1);
    printf("Código: %c %s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Área em km²: %f\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);

    // CARTA 2 //

    printf("Estado: %c\n", estado2);
    printf("Código: %c %s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área em km²: %f\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);

    return 0;
}
