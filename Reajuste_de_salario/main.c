#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sa, pr, sr;   // sa = salario; pr = percentual de reajuste; sr = salario reajustado

    printf("Digite seu salario: \n");
    scanf("%f", &sa);

    printf("Digite o percentual de reajuste em numero real entre 0 e 1. \nExemplo, se 15%%, faca 0.15. \n");
    scanf("%f", &pr);

    sr = sa * (1 + pr);

    printf("\n----------------------------\n");

    printf("O seu salario reajustado eh: \n%.2f", sr);

    printf("\n----------------------------\n");

    return 0;
}
