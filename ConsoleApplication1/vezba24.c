//zadatak 3: vektori preko funkcija
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS_



//UNOSENJE KOMPONENATA VEKTORA
double* UnosVektora(int n) {
	double* vektor = (double*)malloc(n*sizeof(double));
	for (int i = 0; i < n; i++) {
		printf("Unesite %d. komponentu: ", i + 1);
		scanf_s("%lf", &vektor[i]);
	}
	return vektor;
}

//ZBIR VEKTORA (razlika sa -)
double* ZbirVektora(double* vektorA, double* vektorB, int n) {
	double *zbir = (double*)malloc(n*sizeof(double));
	for (int i = 0; i < n; i++) {
		zbir[i] = vektorA[i] + vektorB[i];
	}
	return zbir;
}

//MNOZENJE SKALAROM
double* mnozenjeSkalarom(double* vektor, int n, int skalar) {
	double* vektorC = (double*)malloc(n * sizeof(double));
	for (int i = 0; i < n; i++) {
		vektorC[i] = skalar * vektor[i];
	}
	return vektorC;
}

//SKALARNI PROIZVOD
double SkalarniProizvod(double* vektor1, double* vektor2, int n) {
	double SP = 0;
	for (int i = 0; i < n; i++) {
		SP += vektor1[i] * vektor2[i];
	}
	return SP;
}

//INTENZITET VEKTORA
double Intenzitet(double* vektor1, int n) {
	return sqrt(SkalarniProizvod(vektor1, vektor1, n));
}

//VEKTORSKI UGAO
double VektorskiUgao(double* vektor1, double* vektor2, int n) {
	double vrednost = (SkalarniProizvod(vektor1, vektor2, n) / (Intenzitet(vektor1, n) * Intenzitet(vektor2, n)));
	if (vrednost < -1 || vrednost>1) {
		return 0;
	}
	return acos(vrednost);
}

//VEKTORSKI PROIZVOD



//POVRSINA PARALELOGRAMA




//ISPIS
void IspisVektora(double*vektor, int n) {
	printf("(\t");
	for (int i = 0; i < n; i++) {
		printf("%.2lf\t", vektor[i]);
	}
	printf(")\n");
}


int vezba24() {
	int n = 3;
	printf("Unesite koordinate vektora A: \n");
	double* vektorA = UnosVektora(n);
	IspisVektora(vektorA, n);

	printf("Unesite koordinate vektora B: \n");
	double* vektorB = UnosVektora(n);
	IspisVektora(vektorB, n);
	
	printf("Zbir vektora je: ");
	IspisVektora(ZbirVektora(vektorA, vektorB, n), n);

	int skalar;
	printf("Unesite skalar:");
	scanf_s("%d", &skalar);
	printf("Vektor dobijen mnozenjem vektora A i skalara %d: ", skalar);
	IspisVektora(mnozenjeSkalarom(vektorA, n, skalar), n);
	printf("Vektor dobijen mnozenjem vektora B i skalara %d: ", skalar);
	IspisVektora(mnozenjeSkalarom(vektorB, n, skalar), n);

	printf("Skalarni proizvod je: %lf ", SkalarniProizvod(vektorA, vektorB, n));

	printf("\nIntenzitet vektora A je: %lf", Intenzitet(vektorA, n));
	printf("\nIntenzitet vektora B je: %lf", Intenzitet(vektorB, n));

	printf("\nUgao izmedju vektora A i B je: %lf", VektorskiUgao(SkalarniProizvod, Intenzitet, n));



	return 0;
}








/*int vezba13() {

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
}*/