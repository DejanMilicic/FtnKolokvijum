// zadatak 6: resavanje sistema od dve linearne jednacine
#include <stdio.h>
#define _CRT_SECURE_NO_WARNIGNS


int vezba6() {

	double a1, a2, b1, b2, c1, c2;
	double x, y, D, Dx, Dy;

	printf("Unesite koeficijente prve jednacine: ");
	scanf_s("%lf%lf%lf", &a1, &b1, &c1);

	printf("Unesite koeficijente druge jednacine: ");
	scanf_s("%lf%lf%lf", &a2, &b2, &c2);

	D = (a1 * b2) - (a2 * b1);
	Dx = (c1 * b2) - (c2 * b1);
	Dy = (a1 * c2) - (a2 * c1);

	if (D != 0) {
		x = Dx / D;
		y = Dy / D;

		printf("Resenje jednacine je x=%lf i y=%lf", x, y);
	}
	else
		if (Dx == 0 || Dy == 0)
			printf("\tSistem je neodredjen.");
		else 
			printf("\tSistem je protivrecan.");
	
	return 0;
}