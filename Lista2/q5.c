#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  qtdeHoras;
    float valorHora;

    printf("Informe a quantidade de horas trabalhadas e o valor da hora: ");
    scanf("%d%f", &qtdeHoras, &valorHora);

    if (qtdeHoras <= 40)
    {
        printf("Salário: %.2f", qtdeHoras * valorHora);
    } else if (qtdeHoras <= 60) {
        printf("Salário: %.2f", qtdeHoras * valorHora * 1.5);
    } else {
        printf("Salário: %.2f", qtdeHoras * valorHora * 2);
    }
    

    return 0;
}