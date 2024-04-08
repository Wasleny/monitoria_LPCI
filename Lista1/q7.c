#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorHoraAula, percentualINSS; 
    int numAulas;

    printf("Informe o valor da hora-aula: ");
    scanf("%f", &valorHoraAula);

    printf("Informe a qtde de aulas dadas: ");
    scanf("%d", &numAulas);

    printf("Informe o percentual do INSS: ");
    scanf("%f", &percentualINSS);

    printf("Salário líquido: R$ %.2f", valorHoraAula * numAulas * (1 - percentualINSS / 100));

    return 0;
}