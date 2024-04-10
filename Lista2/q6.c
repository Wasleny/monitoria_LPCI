#include <stdio.h>
#include <stdlib.h>

int main()
{
    int placarTime1, placarTime2, palpiteTime1, palpiteTime2, pontos = 0;

    printf("Infome o placar:\n");
    scanf("%d%d", &placarTime1, &placarTime2);
    printf("Infome o palpite:\n");
    scanf("%d%d", &palpiteTime1, &palpiteTime2);

    if (placarTime1 == palpiteTime1)
    {
        pontos += 5;
    }

    if (placarTime2 == palpiteTime2)
    {
        pontos += 5;
    }

    if ((placarTime1 > placarTime2 && palpiteTime1 > palpiteTime2) || (placarTime1 < placarTime2 && palpiteTime1 < palpiteTime2))
    {
        pontos += 10;
    }

    printf("Pontos: %d", pontos);

    return 0;
}