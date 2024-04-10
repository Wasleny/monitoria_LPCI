#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    printf("Informe X, Y e Z: ");
    scanf("%d%d%d", &x, &y, &z);

    if (x + y == z)
    {
        printf("x + y é igual a z");
    }
    else if (x + y > z)
    {
        printf("x + y é maior que z");
    } else
    {
        printf("x + y é menor que z");
    } 

    return 0;
}