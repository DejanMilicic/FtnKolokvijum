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
	double vrednost = SkalarniProizvod(vektor1, vektor2, n) / (Intenzitet(vektor1, n) * Intenzitet(vektor2, n));
	if (vrednost<-1 || vrednost>1) {
		return 0;
	}
	return acos(vrednost);
}

//VEKTORSKI PROIZVOD
double* VektorskiProizvod(int n, double* vektorA, double* vektorB) {
	double* vektorskiproizvod = (double*)malloc(n * sizeof(double));
	for (int i = 0; i < n; i++) {
		vektorskiproizvod[0] = (vektorA[1] * vektorB[2] - vektorA[2] * vektorB[1]);
		vektorskiproizvod[1] = (vektorA[2] * vektorB[0] - vektorA[0] * vektorB[2]);
		vektorskiproizvod[2] = (vektorA[0] * vektorB[1] - vektorA[1] * vektorB[0]);
	}
	return vektorskiproizvod;
}

//POVRSINA PARALELOGRAMA
double PovrsinaParalelograma(int n, double* vektorA, double* vektorB) {
	return Intenzitet(VektorskiProizvod(n, vektorA, vektorB), n);
}

//POVRSINA TROUGLA
double PovrsinaTrougla(int n, double* vektorA, double* vektorB) {
	double vp = 0.5 * Intenzitet(VektorskiProizvod(n, vektorA, vektorB), n);
	return vp;
}

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

	printf("\nUgao izmedju vektora A i B je: %lf", VektorskiUgao(vektorA, vektorB, n));

	printf("\nVektorski proizvod je: ");
	IspisVektora(VektorskiProizvod(n, vektorA, vektorB), n);

	printf("\nPovrsina paralelograma je: %lf", PovrsinaParalelograma(n, vektorA, vektorB));
	printf("\nPovrsina trougla je: %lf", PovrsinaTrougla(n, vektorA, vektorB));


	return 0;
}
