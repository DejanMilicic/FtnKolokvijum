// zadatak 20: Sortiranje niza upotrebom dinamicke memorije
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS_


int vezba20() {
	int maxNiz = 20;
	int brojElemenata;
	printf("Unesite duzinu niza: ");
	scanf_s("%i", &brojElemenata);
	if (brojElemenata <= 0 || brojElemenata > maxNiz) return 0;

	int* niz = (int*)malloc(brojElemenata * sizeof(int));
	for (int i = 0; i < brojElemenata; i++) {
		printf("Unesite %i. clan: ", i+1);
		scanf_s("%i", &niz[i]);
	}

	for (int i = 0;i < brojElemenata;i++) {
		for (int j = i;j < brojElemenata;j++)
		{
			if (niz[i] > niz[j])
			{
				int temp = niz[i];
				niz[i] = niz[j];
				niz[j] = temp;
			}
		}
	}

	printf("Sortiran niz je \n");
	for (int i = 0;i < brojElemenata;i++)
	{
		printf("%i ", niz[i]);
	}
	
	free(niz);

	return 0;
}



//nalazenje najmanjeg clana u nizu
int vezba14_1() {
	int n;
	int maxNiz = 50;
	
	while (1) {
		printf("Unesite duzinu niza: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > maxNiz) break;

		int *niz = (int*)malloc(n * sizeof(int));

		for (int* ptr = niz; ptr < (niz+n); ptr++) { 
			printf("Unesi clan niza:");
			scanf_s("%d", ptr);   //scanf prima pointer
		}

		int min = *niz;

		for (int* ptr = niz + 1; ptr < (niz + n); ptr++) {
			if (*ptr < min) min = *ptr;
		}
		printf("Najmanja vrednost niza je: %d\n\n", min);
	
		free(niz);
	}
	return 0;
}




//obrtanje redosleda elemenata niza koriscenjem pointera

int vezba15_1() {
	int n;
	int maxNiz = 20;

	while (1) {
		printf("Unesite duzinu niza: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > maxNiz) break;

		int *niz = (int*)malloc(n * sizeof(int));

		for (int *ptr = niz; ptr < niz + n; ptr++) {
			printf("Unesi clan niza: ");
			scanf_s("%d", ptr);
		}

		for (int *p = niz, *q = niz+n-1; p < q; p++, q--) {  //niz+n-1 je poslednji element u nizu
			int temp = *p;
			*p = *q;
			*q = temp;
		}

		printf("Izmenjen niz glasi: ");
		for (int* ptr = niz; ptr < niz + n; ptr++) {
			printf("%d\t", *ptr); 
		}
		printf("\n\n");
	}
	return 0;
}