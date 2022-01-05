#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;
    printf("Digite a temperatura em graus Celcius \n");
    scanf("%f", &C);

    F = C * 1.8 + 32;

    printf("A temperatura em Celcius e: %.2f \n", C);

    printf("A temperatura em Farenheit e: %.2f \n", F);

    return 0;
}
