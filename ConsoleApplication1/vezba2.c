// zadatak 2: obim i povrsina kruga
#include "stdio.h"
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159

int vezba2()
{
    printf("Unesite velicinu poluprecnika:");
    double r, O, P;
    scanf_s("%lf", &r);
    O = 2 * r * PI;
    P = r * r * PI;
        printf("Obim kruga je: %.2lf", O);
    printf("\nPovrsina kruga je: %.2lf", P);

    return 0;
}