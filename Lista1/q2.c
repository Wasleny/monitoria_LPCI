#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Informe um tempo em segundos: ");
    scanf("%d", &num);

    printf("%dhrs", num / 3600);
    num %= 3600;
    printf("%dmin", num / 60);
    num %= 60;
    printf("%ds", num);

    return 0;
}