//zadatak 2: broj razlicitih elemenata u celobrojnom nizu
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS_
#define nmax 20



int razlicitiel(int *niz, int n) {
	int rezultat = 0;
	int j;

	for (int i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (niz[i] == niz[j]) break;
		}
		if (i == j) rezultat++;
	}
	return rezultat;
}


int vezba23() {
	int n;

	while (1) {
		printf("Duzina niza?");
		scanf_s("%d", &n);
		if (n<=0 || n>nmax) break;

		int *niz = (int*)malloc(n*sizeof(int));

		for (int i = 0; i < n; i++) {
			printf("\n%d. element niza:", i+1);
			scanf_s("%d", &niz[i]);
		}
		
		printf("Broj razlicitih elementa je: %d", razlicitiel(niz, n));
		printf("\n");
	}

	return 0;
}