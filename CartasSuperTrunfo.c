#include <stdio.h>

int main() {
   
    char estado = "A";
    char codigo [20] = "A01";
    char cidade[20] = "Moscou";
    int populacao = "12476200";
    char area[20] = "2.511km2";
    char pib[50] = "4.10 trilhões de dólares";
    int turismo = "20";

    // nao consigo entender qual o erro que esta acontecendo 
    
    printf("Digite o estado: \n");
    scanf("%c", &estado);
    printf("Digite uma cidade: \n");
    scanf("%s", &cidade);
    printf("Digite a populacao: \n");
    scanf(" %f", &populacao);
    printf("Digite o PIB: \n");
    scanf("%s", &pib);
    printf("Quantos pontos turisticos? \n");
    scanf("%d", &turismo);
    printf("Quantos km2 tem Moscou? \n");
    scanf("%f", &area);
    printf("qual o codigo? \n");
    scanf("%s", &codigo);
}
