//zadatak 4: Izracunavanje povrsina
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS_
#define PI 3.14

//LOPTA
double PovrsinaLopte(double r) {
	double povrsina = 4 * r * r * PI;
	return povrsina;
}

int vezba25() {
	int* z = (int*)malloc(sizeof(int));
	double r;
	printf("Unesite poluprecnik lopte: ");
	scanf_s("%lf", &r);
	printf("Povrsina lopte je: %lf", PovrsinaLopte(r));

	return 0;
}

//swap primer
void swap(int* a, int* b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}

void vezba25_1() {
	int* a = (int*)malloc(sizeof(int));
	int* b = (int*)malloc(sizeof(int));
	*a = 5; //vrednost pointera
	*b = 8;
	swap(a, b);
	printf("%d %d", *a, *b);
}
