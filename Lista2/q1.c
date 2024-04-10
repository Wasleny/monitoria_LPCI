#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Informe um número: ");
    scanf("%d", &num1);
    printf("Informe um número: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d é maior que %d", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("%d é maior que %d", num2, num1);
    }
    else
    {
        printf("São iguais");
    }

    return 0;
}