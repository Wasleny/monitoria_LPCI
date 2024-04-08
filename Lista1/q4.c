#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Informe um número: ");
    scanf("%d", &num);
    
    printf("Antecessor: %d | Sucessor: %d", num - 1, num + 2);

    return 0;
}