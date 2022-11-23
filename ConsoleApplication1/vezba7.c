// zadatak 7: resavanje kvadratne jednacine
#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNIGNS

int vezba7() {

	double a, b, c;
	double x1, x2, y1, y2;
	double d;

	printf("Unesi koeficijente kvadratne jednacine:");
	scanf_s("%lf%lf%lf", &a, &b, &c);

	d = b * b - 4 * a * c;

	if (a != 0) {

		if (d > 0) {
			x1 = (-b + sqrt(d)) / 2 * a;
			x2 = (-b - sqrt(d)) / 2 * a;
			printf("Dobijamo realna resenja, i vrednosti su: %.2lf%.2lf", x1, x2);
		}
		else if (d == 0) {
			x1 = -b / 2 * a;
			printf("Resenje je realno i jednostruko, i iznosi %lf", x1);
		}
		else {
			x1 = -b / 2 * a;
			y1 = sqrt(-d) / 2 * a;
			x2 = x1;
			y2 = -y1;
			printf("Resenja su kompleksna, i iznose: (%.2lf,%.2lf) (%.2lf,%.2lf)", x1, y1, x2, y2);
		}
	}
	else {
		if (b != 0) {
			x1 = -c / b;
			printf("Dobija se linearna jednacina, cije je resenje %.2lf", x1);
		}
		else printf("Jednacina nema resenja.");
	}
		
	return 0;
}