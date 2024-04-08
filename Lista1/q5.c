#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t, v;

    printf("Informe o tempo de viagem (em horas): ");
    scanf("%f", &t);

    printf("Informe a velocidade média (em Km/h): ");
    scanf("%f", &v);
    
    printf("Consumo de combustível: %.2f", t * v / 15);

    return 0;
}