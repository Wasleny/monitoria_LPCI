#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float vi, ang;

    printf("Informe a velocidade inicial (em m/s): ");
    scanf("%f", &vi);

    printf("Informe o angulo (em graus): ");
    scanf("%f", &ang);

    printf("Distância em metros: %f", vi * vi * sin(2 * (ang * M_PI / 180)) / 9.81);

    return 0;
}