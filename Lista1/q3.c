#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media1, media2, aux;
    media1 = media2 = 0;

    printf("Informe o primeiro número: ");
    scanf("%f", &aux);
    media1 += aux;

    printf("Informe o segundo número: ");
    scanf("%f", &aux);
    media1 += aux;

    printf("Informe o terceiro número: ");
    scanf("%f", &aux);
    media1 += aux;

    printf("Informe o quarto número: ");
    scanf("%f", &aux);
    media2 += aux;

    printf("Informe o quinto número: ");
    scanf("%f", &aux);
    media2 += aux;

    printf("Informe o sexto número: ");
    scanf("%f", &aux);
    media2 += aux;

    media1 /= 3;
    media2 /= 3;
    printf("Média dos 3 primeiros: %.2f\n", media1);
    printf("Média dos 3 últimos: %.2f\n", media2);
    printf("Soma das médias: %.2f\n", media1 + media2);

    return 0;
}