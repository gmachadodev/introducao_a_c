#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pp, pd, ppd;    //pp = pecas produzidas; pd = pecas defeituosas; ppd = percentual de pecas defeituosas

    printf("Digite quant. de pecas produzidas \n");
    scanf("%f", &pp);
    printf("", pp);

    printf("Digite quant. de pecas defeituosas \n");
    scanf("%f", &pd);
    printf("", pd);

    ppd = pd / pp * 100;

    if (ppd >= 10)
        printf("Maq. requer man., pois ppd e: %.2f %% \n", ppd);
    else
        printf("Maq. nao requer man., pois ppd e: %.2f %% \n", ppd);

    return 0;
}
