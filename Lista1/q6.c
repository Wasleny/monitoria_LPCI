#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tamanho;

    printf("Informe o tamanho do cômodo em metros: ");
    scanf("%d", &tamanho);

    tamanho *= 15;
    tamanho /= 60;
    
    printf("Quantidade de lâmpadas necessárias: %.0f", ceil(tamanho));

    return 0;
}