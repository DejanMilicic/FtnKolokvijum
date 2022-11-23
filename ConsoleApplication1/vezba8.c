// zadatak 8: Tabeliranje vrednosti izraza
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_

int vezba8() {
	double xmin, xmax, dx;

	printf("Uneti vrednost xmin i xmax: ");
	scanf_s("%lf%lf", &xmin, &xmax);

	printf("Uneti vrednost dx: ");
	scanf_s("%lf", &dx);

	printf("vrednost x: \t \t vrednost y: \n");

	for (double x=xmin; x<=xmax; x+=dx) {
		double y = (x * x - 2 * x - 2) / (x * x + 1);
		printf("%.2lf \t \t \t %.2lf\n", x, y);
	}
	return 0;
}