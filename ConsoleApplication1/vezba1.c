// zadatak 1: zbir dva cela broja
#include "stdio.h"
#define _CRT_SECURE_NO_WARNIGNS

int vezba1()
{
    int a, b, c;
    printf("Unesite vrednost dva cela broja:");
    scanf_s("%d%d", &a, &b);
    c = a + b;
    printf("\nZbir unetih brojeva je: %d", c);

    return 0;
}