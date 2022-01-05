// Codigo para fazer calculo de area!


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, l, a;          // c = comprimento; l = largura; a = area;

    printf("Digite o comprimento em metros:\n");
    scanf("%f", &c);

    printf("Digite a largura em metros:\n");
    scanf("%f", &l);

    a = c * l;

    printf("\n------------------------------\n");

    printf("A medida da area e: %.2f m2", a);

    printf("\n------------------------------\n");

    return 0;
}
