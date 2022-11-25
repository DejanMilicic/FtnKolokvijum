// zadatak 18: Razvrstavanje elemenata u dva niza
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_
#define N 50


int vezba18() {
	while (1) {
		int n;
		int a[N], pos[N], neg[N];
		printf("Unesite duzinu niza: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > N) break;

		printf("Unesite clanove niza: ");
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &a[i]);
		}

		int j = 0, k = 0;
		for (int i = 0; i < n; i++) {
				if (a[i] >= 0) {
					pos[j] = a[i];
					j++;
				}
				else {
					neg[k] = a[i];
					k++;
				}
		}
		
		if (j) {
			printf("Pozitivan niz je:");
			for (int i = 0; i < j; i++) printf("%d\t", pos[i]);
		}
		else printf("\nNe postoji pozitivan niz.");

		if (k) {
			printf("\nNegativan niz je:");
			for (int i = 0; i < k; i++) printf("%d\t", neg[i]);
		} else printf("\nNe postoji negativan niz.");

		printf("\n\n");
	}
	return 0;
}