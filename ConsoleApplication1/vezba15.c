// zadatak 15: Obrtanje redosleda elemenata niza
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_

int vezba15() {
	int a[50];
	int n;

	while (1) {
		printf("Unesite duzinu niza: ");
		scanf_s("%d", &n);
		if (n<=0 || n>50) break;

		for (int i = 0; i<=n-1; i++) {
			printf("Unesi clan niza: ");
			scanf_s("%d", &a[i]);
		}

		for (int i = 0, j=n-1; i < j; i++, j--) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

		printf("Izmenjen niz glasi: ");
		for (int i = 0; i <= n - 1; i++) {
			printf("%d", a[i]);
		}
		printf("\n\n");
	}
	return 0;
}