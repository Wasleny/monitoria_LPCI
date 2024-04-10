#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Informe os números A e B: ");
    scanf("%d%d", &a, &b);

    if (a % b == 0)
    {
        printf("%d é divisível por %d", a, b);
    }
    else
    {
        printf("%d não é divisível por %d", a, b);
    }

    return 0;
}