// zadatak 9: Racunanje sume i proizvoda prvih n brojeva (zadatak 2.7)
// da je pisalo n brojeva (bez prvih) unosili bi i nmin!
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_

int vezba9() {

	int n, s=0, p=1;

	printf("Unesite broj clanova: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		s += i;
		p *= i;
	}
	printf("Suma prvih n brojeva je: %d, a proizvod: %d", s, p);

	return 0;
}