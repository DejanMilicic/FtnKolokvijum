// zadatak 10: Izracunavanje aritmeticke sredine niza i devijacije
#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS_

int vezba10() {

	int n;  //n-broj elemenata, x-bilo koji element (koji se unosi), s-suma svih clanova niza
	double x, s = 0, as=0, sd=0, d=0;  // as-aritm. sred., sd-stand. devijacija, d-zbir kvadrata
	printf("Unesite broj elemenata niza: ");
	scanf_s("%d", &n);


	while (n > 0) {

		for (int i = 1; i <= n; i++) {  //i-brojac
			printf("Unesite clan niza:");
				scanf_s("%lf", &x);
			s += x;

			d += (x * x);
		}

		as = s / n;
		printf("Aritmeticka srednja vrednost je: %lf", as);

		sd = sqrt(d/n - as * as);
		printf("\nStandardna devijacija je: %lf", sd);
	}
	return 0;
}


// zadatak 11: druga verzija zadatka 10 /koriscena druga formula

int vezba11() {

	int n;  //n-broj elemenata, s-suma svih clanova niza
	double s = 0, as = 0, sd = 0, d = 0;  // as-aritm. sred., sd-stand. devijacija, d-zbir kvadrata
	double a[50];
	printf("Unesite broj elemenata niza: ");
	scanf_s("%d", &n);


	while (n > 0 || n < 50) {

		for (int i = 0; i < n; i++) {  //i-brojac
			printf("Unesite clan niza:");
			scanf_s("%lf", &a[i]);

			s += a[i];
		}

		as = s / n;
		printf("Aritmeticka srednja vrednost je: %lf", as);

		
		for (int i = 0; i < n; i++) {
			d += pow(as - a[i], 2);
		}

		sd = sqrt(d / n);
		printf("\nStandardna devijacija je: %lf\n\n", sd);

		printf("Unesite broj elemenata niza: ");
		scanf_s("%d", &n);
	}
	return 0;
}