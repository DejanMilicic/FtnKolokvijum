// zadatak 4: izracunavanje trougla u ravni
#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int vezba4() {

	double Xa, Ya, Xb, Yb, Xc, Yc;
	double a, b, c, s, P;

	printf("Unesite koordinate tacke A:");
	scanf_s("%lf%lf", &Xa, &Ya);

	printf("Unesite koordinate tacke B:");
	scanf_s("%lf%lf", &Xb, &Yb);

	printf("Unesite koordinate tacke C:");
	scanf_s("%lf%lf", &Xc, &Yc);

	a = sqrt(pow(Xb - Xc, 2) + pow(Yb - Yc, 2));
	b = sqrt(pow(Xc - Xa, 2) + pow(Yc - Ya, 2));
	c = sqrt(pow(Xa - Xb, 2) + pow(Ya - Yb, 2));

	s = (a + b + c) / 2;
	P = sqrt(s * (s - a) * (s - b) * (s - c));

	printf("\nPovrsina trougla je %lf", P);

	return 0;
}