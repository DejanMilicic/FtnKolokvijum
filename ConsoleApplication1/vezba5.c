// zadatak 5: uredjivanje tri broja
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int vezba5() {

	double a, b, c;

	printf ("Unesite tri realna broja: ");
	scanf_s ("%lf%lf%lf", &a, &b, &c);

	double p;
	if (a > b) {
		p = a; a = b; b = p;
	}

	if (a > c) {
		p = a; a = c; c = p;
	}

	if (b > c) {
		p = b; b = c; c = p;
	}

	printf("Brojevi redom idu: %.0lf %.0lf %.0lf", a, b, c);

	return 0;
}