#include <stdio.h>

int main() {

    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[60], cidade2[60];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;

           //carta 1//

   printf("Digite o nome do estado:\n");
   scanf("%s", estado1);

   printf("Digite o código da carta:\n");
   scanf("%s", &codigo1);

   printf("Digite a cidade:\n");
   scanf("%s", &cidade1);

   printf("Digite a população:\n");
   scanf("%d", &populacao1);

   printf("Digite a area em km2:\n");
   scanf("%f", &area1);

   printf("Digite o PIB:\n");
   scanf("%f", &pib1);

   printf("Digite os pontos turisticos:\n");
   scanf("%d", &turismo1);

   //calculo

   densidadepopulacional1 = (float)populacao1 / area1;
   pibpercapita1 = pib1 / populacao1;

//carta 2//
        
    printf("Digite o nome do estado:\n");
    scanf("%s", estado2);
 
    printf("Digite o código da carta:\n");
    scanf("%s", &codigo2);
 
    printf("Digite a cidade:\n");
    scanf("%s", &cidade2);
 
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
 
    printf("Digite a area em km2:\n");
    scanf("%f", &area2);
 
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
 
    printf("Digite os pontos turisticos:\n");
    scanf("%d", &turismo2);

       //calculo

   densidadepopulacional2 = (float)populacao2 / area2;
   pibpercapita2 = pib2 / populacao2;

    // DADOS DAS CARTAS //

   // CARTA 1 //

    printf("\nEstado: %c\n", estado1);
    printf("Código: %c %s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de pontos turisticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f habitantes por km²\nPIB per Capita: %.2f", densidadepopulacional1, pibpercapita1);
    // CARTA 2 //

    printf("\nEstado: %c\n", estado2);
    printf("Código: %c %s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turisticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f habitantes por km²\nPIB per Capita: %.2f", densidadepopulacional2, pibpercapita2);

    return 0;
}
