// zadatak 16: Umetanje broja u uredjen niz
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_
#define N_MAX 10

int vezba16() {

	while (1) {

		int a[N_MAX];
		int n;
		printf("Unesite duzinu niza: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > N_MAX) break;

		for (int i = 0; i < n; i++) {
			printf("a[%d] = ", i);
			scanf_s("%d", &a[i]);
		}

		int b;
		printf("Unesite broj: ");
		scanf_s("%d", &b);

		int j = n-1;
		while (j >= 0 && a[j] > b) {    // 2 6 9 12  <-  3
			a[j + 1] = a[j];
			j--;
		}

		a[j+1] = b;
		
		printf("Konacan niz je: ");
		for (int i = 0; i < n+1; i++) printf("%d\t", a[i]);
		printf("\n\n");
	}



return 0;
}