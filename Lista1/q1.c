#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;

    printf("Informe um número em metros: ");
    scanf("%f", &num);

    printf("Em decímetros: %.2f\n", num * 10);
    printf("Em centímetros: %.2f\n", num * 100);
    printf("Em milímetros: %.2f\n", num * 1000);

    return 0;
}