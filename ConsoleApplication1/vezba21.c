// zadatak 21_1: Prebrojavanje broja cifara koje se pojavljuju u jednocifrenom nizu
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS_


int vezba21() {

		int* numNum = (int*)calloc(10, sizeof(int));
		int numUser;

		printf("Unesite broj elemenata niza: ");
		scanf_s("%i", &numUser);

		
		for (int i = 0; i < numUser; i++) {
			int num;
			printf("Unesite cifru niza: ");
			scanf_s("%d", &num);
			//0 0 0 0 0 0 0 0 0 0
			numNum[num]++;
		}

		printf("Broj pojavljivanja cifara je: \n");
		for (int i = 0; i < 10; i++) {
			printf("Cifra %d se pojavila %d puta.\n", i, numNum[i]);
		}

		free(numNum);

	return 0;
}

//calloc - dva argumenta !!!



/* zadatak 21_1: 
Ucitavanje elementa niza (bez ogranicenja)
Niz se popunjava dok korisnik ne unese 0 vrednost
Potom se niz sortira i pronalazi vrednost na sredini niza
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS_


int vezba21_2() {

	int unos = 1;  //prva pocetna pozitivna vrednost - bilo sta
	int brojElemenata = 0;
	int* elementNiza = NULL;

	while (unos > 0) {
		printf("Unesite elemente niza vrednosti vece od nule: ");
		scanf_s("%i", &unos);

		if (unos > 0) {
			brojElemenata++;

			int* temp = (int*)malloc(sizeof(int) * brojElemenata); //(int*) - castovanje/konverzija

			if (elementNiza != NULL) {
				for (int i = 0; i < brojElemenata; i++) {
					temp[i] = elementNiza[i];
				}
			}
			free(elementNiza);

			elementNiza = temp;

			elementNiza[brojElemenata - 1] = unos;
		}
	}

	/*
	sortiranje niza

	ispisivanje sortiranog niza

	prikazivanje srednjeg clana
	sl. 1: neparan broj cl
	sl. 2: paran broj cl
	*/

	for (int i = 0; i < brojElemenata - 1; i++) {
		for (int j = i+1; j < brojElemenata; j++) {
			if (elementNiza[i] > elementNiza[j]) {
				int value = elementNiza[i];
				elementNiza[i] = elementNiza[j];
				elementNiza[j] = value;
			}
		}
	}

	printf("Sortiran niz je: \n");
	for (int i = 0; i < brojElemenata; i++) {
		printf("%i \t", elementNiza[i]);
	}

	//trazenje srednjeg elementa niza
	// (neparan, pa paran broj clanova niza)

	double median;

	if (brojElemenata % 2 == 1) {
		int pozicija = (int) floor(brojElemenata * 0.5);  //floor- broj zaokruzuje na manju vrednost -> 6.1=6 ; 6.8=6
		median = elementNiza[pozicija];
	}
	else {
		int pozicija = (int)floor(brojElemenata * 0.5);  // 6/2 je 3 -> 3. clan niza je 4
		//[1, 2, 3, 4, 5, 6]
		int med1 = elementNiza[pozicija];
		int med2 = elementNiza[pozicija - 1];
		median = (med1 + med2) * 0.5;
	}

	printf("Srednji clan niza je: %lf", median);

	return 0;
}
