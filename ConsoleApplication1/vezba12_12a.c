// zadatak 12: srednja vrednost elemenata niza celih br deljivih sa 3
#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS_


int vezba12() {

	int n, x;
	double s=0;
	printf("Unesite broj clanova niza: ");
	scanf_s("%d", &n);

	int m = 0;

	for (int i = 1; i <= n; i++) {
		printf("Unesite clanove niza: ");
		scanf_s("%d", &x);
		if (x % 3 == 0) {
			s += x;
			m++;
		}
	}
	
	if (m) {
		double as = s / m;
		printf("Aritmeticka sredina je: %lf", as);
	}
	else printf("Nema brojeva deljivih sa 3.");

	return 0;
}




int vezba12a() {
	int a[50];
	int n;
	double s = 0;

	while (1) {
		printf("Unesite broj clanova niza: ");
		scanf_s("%d", &n);
		if (n < 0 || n > 50) break;

		int m = 0;

		for (int i = 0; i < n; i++) {
			printf("Unesite clan niza: ");
			scanf_s("%d", &a[i]);
			if (a[i] % 3 == 0) {
				s += a[i];
				m++;
			}
		}

		if (m) {
			double as = s / m;
			printf("Aritmeticka sredina je: %lf", as);
		}
		else printf("Nema brojeva deljivih sa 3.");

		return 0;

	}
}