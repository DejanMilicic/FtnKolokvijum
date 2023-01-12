// zadatak 19: transponovanje matrice
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS_


int vezba19() {
	while (1) {
		int maxDim = 5;
		int brojRedova, brojKolona;
		printf("Unesite broj redova i broj kolona matrice M: ");
		scanf_s("%i%i", &brojRedova, &brojKolona);
		if (brojRedova<1 || brojRedova>maxDim || brojKolona<1 || brojKolona>maxDim) break;

		int** matrica = (int**)malloc(sizeof(int*) * brojRedova);
		for (int i = 0; i < brojRedova; i++) {
			matrica[i] = (int*)malloc(sizeof(int) * brojKolona);     //matrica[i] - pointer
			for (int j = 0; j < brojKolona; j++) {
				printf("Unesite element [%i][%i]: ", i, j);
				scanf_s("%i", &matrica[i][j]);
			}
		}

		int** matricaT = (int**)malloc(sizeof(int*) * brojKolona);
		for (int i = 0; i < brojKolona; i++) {
			matricaT[i] = (int*)malloc(sizeof(int) * brojRedova);    
			for (int j = 0; j < brojRedova; j++){
				matricaT[i][j] = matrica[j][i];
			}
		}
		
		printf("Transponovana matrica glasi: \n");
			for (int i = 0; i < brojKolona; i++) {
				for (int j = 0; j < brojRedova; j++) {
					printf("%i", matricaT[i][j]);
				}
				printf("\n");
			}


			for (int i = 0; i < brojRedova; i++) {
				free(matrica[i]);
			}
			free(matrica);


			for (int i = 0; i < brojKolona; i++) {
				free(matricaT[i]);
			}
			free(matricaT);
	}

	return 0; 
}
// NE RADI




/*
int main() {

	while (1) {
		int Nmax = 5;
		int BrKol, BrRed;

		printf("Unesite duzinu kolona: ");
		scanf_s("%d", &BrKol);
		printf("Unesite duzinu vrsta: ");
		scanf_s("%d", &BrRed);
		if (BrKol<0 || BrKol>Nmax || BrRed<0 || BrRed>Nmax) break;


		printf("Unesite elemente matrice: ");
		int** matrica = (int**)malloc(BrRed * sizeof(int*));
			for (int i = 0; i < BrRed; i++) {
				int* matrica[i] = (int)malloc(BrKol * sizeof(int));   //matrica[i]??
				for (int j = 0; j < BrKol; j++) {
					scanf_s("%d");
				}
			}

		printf("Unesite elemente matrice: ");
		scanf_s("%d", El);

	}

}
*/