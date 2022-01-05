#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dt, cg, cm;       // dt = distancia total; cg = combustivel gasto, cm = consumo medio

    printf("Distancia total em Km \n");
    scanf("%f", &dt);

    printf("Combustivel gasto \n");
    scanf("%f", &cg);

    cm = dt / cg;

    printf("Consumo medio e %.3f Km/l \n", cm);

    return 0;
}
