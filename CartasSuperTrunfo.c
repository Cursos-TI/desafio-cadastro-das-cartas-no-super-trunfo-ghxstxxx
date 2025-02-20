#include <stdio.h>

int main() {
   
    char estado[20] = "São Paulo";
    char codigo [20] = "A01";
    char cidade[20] = "Guarulhos";
    int populacao = "1.292.000";
    char area = 319.200;
    char pib = 77376467;
    char turismo = 10;

    printf("Estado: %s\n", &estado);
    printf("Código: %s\n", &codigo);
    printf("Cidade: %s\n", &cidade);
    printf("População: %f\n", &populacao);
    printf("Area em KM2: %c\n", &area);
    printf("PIB: %c\n", &pib);
    printf("pontos turisticos: %c\n", &turismo);
    
    
   // os numeros aparecem como caracteres irreconheciveis ou zerados //
    
}
