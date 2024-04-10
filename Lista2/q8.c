#include <stdio.h>
#include <stdlib.h>

int main()
{
    int altura;
    char genero;

    printf("Informe o gênero (F ou M) e a altura(cm): ");
    scanf("%c%d", &genero, &altura);

    if (genero == 'f' || genero == 'F')
    {
        printf("Peso ideal: %.1f", (62.1 * altura) - 44.7);
    } else if (genero == 'm' || genero == 'M')
    {
        printf("Peso ideal: %.1f", (72.7 * altura) - 58);
    } else {
        printf("Entrada inválida");
    }
    
    return 0;
}