// zadatak 13: Skalarni proizvod vektora
#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS_
#define N 3

int vezba13() {

	int n;
	double a[50], b[50];

	while (1) {
		printf("Unesite duzinu vektora: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > 50) break;

		printf("Unesite komponente prvog vektora: ");
		for (int i = 0; i < n; i++) {
			scanf_s("%lf", &a[i]);
		}

		printf("Unesite komponente drugog vektora: ");
		for (int i = 0; i < n; i++) {
			scanf_s("%lf", &b[i]);
		}

		//skalarni proizvod
		double sp = 0;
		for (int i = 0; i < n; i++) {
			sp += a[i] * b[i];
		}
		printf("Skalarni proizvod vektora je: %.0lf\n\n", sp);


		//intenzitet
		double intenzitetA = 0;
		double temp1 = 0;
		for (int i = 0; i < n; i++) {
			temp1 += (a[i] * a[i]);
		}
		intenzitetA = sqrt(temp1);

		printf("Intenzitet vektora a je %.3lf\n", intenzitetA);

		double intenzitetB = 0;
		double temp2 = 0;
		for (int i = 0; i < n; i++) {
			temp2 += (b[i] * b[i]);
		}
		intenzitetB = sqrt(temp2);

		printf("Intenzitet vektora b je %.3lf\n\n", intenzitetB);

		//ugao vektora --> cos(ugla)=skalarni proizvod/proizvod intenziteta
		double ugao;
		double y = sp / (intenzitetA * intenzitetB);
		ugao = acos(y);

		printf("Ugao vektora je: %lf", ugao);
		printf("\n\n");
	}

	return 0;
}


// zadatak 13a: Vektorski proizvod

int vezba13a() {
	int a[N], b[N], c[N];

		printf("Unesite komponente vektora a: \n");
		for (int i = 0; i < N; i++) {
			printf("komponenta a[%d]:", i + 1);
			scanf_s("%d", &a[i]);
		}

		printf("Unesite komponente vektora b: \n");
		for (int i = 0; i < N; i++) {
			printf("komponenta b[%d]:", i + 1);
			scanf_s("%d", &b[i]);
		}
		
		c[0] = (a[1] * b[2] - a[2] * b[1]);
		c[1] = (a[2] * b[0] - a[0] * b[2]);
		c[2] = (a[0] * b[1] - a[1] * b[0]);
		
		printf("\nVektorski proizvod je: (%d,%d,%d)", c[0], c[1], c[2]);


		//povrsina paralelograma (povrsina je jednaka intenzitetu vektorskog proizvoda)
		double s = c[0] * c[0] + c[1] * c[1] + c[2] * c[2];
		double P = sqrt(s);
		printf("\nPovrsina paralelograma je: %lf", P);

	return 0;
}
