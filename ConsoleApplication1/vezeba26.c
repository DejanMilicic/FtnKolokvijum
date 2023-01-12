//zadatak 5: Matrice
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS_

int** UnosMatrice(int dim) {
	int** matrica = (int**)malloc(dim * sizeof(int));

	for (int i = 0; i < dim; i++) {
		matrica[i] = (int*)malloc(dim * sizeof(int));
		for (int j = 0; j < dim; j++) {
			printf("Unesite [%d][%d] clan: ", i+1, j+1);
			scanf_s("%d", &matrica[i][j]);
		}
	}
	return matrica;
}

int** Sabiranje(int** matrica1, int** matrica2, int dim) {
	int** zbir = (int**)malloc(dim * sizeof(int));

	for (int i = 0; i < dim; i++) {
		zbir[i] = (int*)malloc(dim * sizeof(int));
		for (int j = 0; j < dim; j++) {
			zbir[i][j] = matrica1[i][j] + matrica2[i][j];
		}
	}
	return zbir;
}

int** SkalarMatrica(int s, int**matrica1, int dim) {
	int** skalarmatrica = (int**)malloc(dim * sizeof(int));
	for (int i = 0; i < dim; i++) {
		skalarmatrica[i] = (int*)malloc(dim * sizeof(int));
		for (int j = 0; j < dim; j++) {
			skalarmatrica[i][j] = s * matrica1[i][j];
		}
	}
	return skalarmatrica;
}

double SrednjaVrednost(int dim, int** matrica) {
	double suma = 0;
	double srednjavr;
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			suma = (suma + matrica[i][j]);
			srednjavr = suma / (dim * dim);
		}
	}
	return srednjavr;
}

int NajmanjiEl(int dim, int** matrica) {
	int min = matrica[1][1];
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			if (min > matrica[i][j]) min = matrica[i][j];
		}
	}
	return min;
}


void IspisMatrice(int dim, int** matrica) {
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			printf("%d\t", matrica[i][j]);
		}
		printf("\n");
	}
}


int vezba26() {
	int dim;
	int Nmax = 5;
	while (1) {
		printf("Unesite dimenziju kvadratne matrice: ");
		scanf_s("%d", &dim);
		if (dim <= 0 || dim > Nmax) break;

		printf("Prva matrica: \n");
		int** matrica1 = UnosMatrice(dim);
		printf("Druga matrica: \n");
		int** matrica2 = UnosMatrice(dim);

		//printf("\nPrva matrica glasi: \n");
		//IspisMatrice(dim, matrica1);

		printf("Matrica dobijena sabiranjem prethodne dve: \n");
		int** zbir = Sabiranje(matrica1, matrica2, dim);
		IspisMatrice(dim, zbir);

		int s;
		printf("Unesite skalar: ");
		scanf_s("%d", &s);
		printf("Prva matrica pomnozena skalarom: \n");
		int** skalarmatrice1 = SkalarMatrica(s, matrica1, dim);
		IspisMatrice(dim, skalarmatrice1);

		printf("Druga matrica pomnozena skalarom: \n");
		int** skalarmatrice2 = SkalarMatrica(s, matrica2, dim);
		IspisMatrice(dim, skalarmatrice2);

		printf("Srednja vrednost prve matrice je: %lf", SrednjaVrednost(dim, matrica1));
		printf("\nSrednja vrednost druge matrice je: %lf", SrednjaVrednost(dim, matrica2));

		printf("\nNajmanji element matrice je: %d", NajmanjiEl(dim, matrica1));
		printf("\nNajmanji element matrice je: %d", NajmanjiEl(dim, matrica2));


		printf("\n\n\n");
	}

	return 0;
}


/*
int** matrica = (int**)malloc(sizeof(int*) * brojRedova);
for (int i = 0; i < brojRedova; i++) {
	matrica[i] = (int*)malloc(sizeof(int) * brojKolona);     //matrica[i] - pointer
	for (int j = 0; j < brojKolona; j++) {
		printf("Unesite element [%i][%i]: ", i, j);
		scanf_s("%i", &matrica[i][j]);
	}
}
*/