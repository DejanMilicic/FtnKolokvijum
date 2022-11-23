// zadatak 3: nalazenje najmanjeg od tri cela broja
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_

int vezba3() {

	double a, b, c;
	printf("Unesite tri celobrojne vrednosti:");
	scanf_s("%lf%lf%lf", &a, &b, &c);

	double min;
	min = a;
		if (b < min) {
		printf ("%lf je najmanja vrednost", b);
		}
			if (c < min) {
			printf ("%lf je najmanja vrednost", c);
			}
				else {
				printf ("%lf je najmanja vrednost", a);
				}
	return 0;
}