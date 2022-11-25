// zadatak 14: Nalazenje vrednosti najmanjeg elementa u nizu
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_

int vezba14() {
	int n;
	int a [50];

	while (1) {
		printf("Unesite duzinu niza: ");
		scanf_s("%d", &n);
		if (n<=0 || n>50) break;

		for (int i=0; i<n; i++) {
			printf("Unesi clan niza:");
			scanf_s("%d", &a[i]);
		}

		double min = a[0];

		for (int i = 1; i < n; i++) {
			if (a[i] < min) min = a[i];
		}
		printf("Najmanja vrednost niza je: %.2lf\n\n", min);
	}
	return 0;
}
