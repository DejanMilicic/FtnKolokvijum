// zadatak 17: Transponovanje kvadratne matrice
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_
#define N_MAX 50

int vezba17() {

	while (1) {
		int n;

		printf("Unesi dimenzije matrice: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > N_MAX) break;

		double a[N_MAX][N_MAX];
		printf("Unesite vrste matrica: \n");

		for (int i = 0; i < n; i++) {
			printf("%d. vrsta: ", i+1);
			for (int j = 0; j < n; j++) {
				scanf_s("%lf", &a[i][j]);
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%lf\t", a[i][j]);
			}
			printf("\n");
		}

		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				double temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		}

		printf("Transponovana matrica je:\n");
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					printf("%lf\t", a[i][j]);
				}
				printf("\n");
			}

	}
	return 0;
}



//vezbe matrice

/* vezba 1: Написати програм за унос елемената целобројне матрице димензија n x n.
Израчунати суму првог реда матрице. */
int vezba17a() {
	int n;
	int a[N_MAX][N_MAX];
	printf("Definisi dimenziju matrice: \n");
	scanf_s("%d", &n);

	printf("Unesi:\n");
	for (int i = 0; i < n; i++) {
		printf("%d. vrsta: ", i + 1);
		for (int j = 0; j < n; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}

	printf("\nMatrica glasi:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%.0d\t", a[i][j]);
		}
		printf("\n");
	}

	double s = 0;
	for (int j = 0; j < n; j++) {
			s += a[0][j];
	}
	printf("Suma prve vrste je: %lf", s);

	return 0;
}



/*vezba 3: Написати програм за унос елемената целобројне матрице димензија n x n.
Пронаћи минималан елемент матрице и приказати га.*/
int vezba17b() {
	int n;
	int a[N_MAX][N_MAX];
	while (1) {
		printf("Unesite dimenziju matrice: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > N_MAX) break;

	
		for (int i = 0; i < n; i++) {
			printf("Unesite %d. vrstu: ", i + 1);
			for (int j = 0; j < n; j++) {
				scanf_s("%d", &a[i][j]);
			}
		}

		int min = a[0][0];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] < min) min = a[i][j];
			}
		}
		printf("\nNajmanji clan je: %d", min);
		printf("\n\n");
	}

	return 0;
}


/*vezba 4: Mnozenje skalarom matrice */
int vezba17c() {

	while (1) {
		int n;
		int a[N_MAX][N_MAX], b[N_MAX][N_MAX];

		printf("Unesite dimenziju matice: ");
		scanf_s("%d", &n);
		if (n <= 0 || n > N_MAX) break;
		
		for (int i = 0; i < n; i++) {
			printf("Unesite %d. vrstu: ", i + 1);
			for (int j = 0; j < n; j++) {
				scanf_s("%d", &a[i][j]);
			}
		}

		int s;
		printf("Unesite vrednost skalara: ");
		scanf_s("%d", &s);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				b[i][j] = s * a[i][j];
			}
		}

		printf("Matrica glasi: \n");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d\t", b[i][j]);
			}
			printf("\n");
		}

		printf("\n\n");
	}
	return 0;
}


/*vezba 5: Написати програм за унос 2 целобројне матрице димензија n x n. Израчунати
zbir те две матрице и приказати резултујућу матрицу.*/
int vezba17d() {
	while (1) {
		int n;
		int a[N_MAX][N_MAX], b[N_MAX][N_MAX], c[N_MAX][N_MAX];
		printf("Unesite duzinu matrica a i b: ");
		scanf_s("%d", &n);
		
		if (n <= 0 || n > N_MAX) break;

		printf("Unesite matricu a: \n");
		for (int i = 0; i < n; i++) {
			printf("Unesite %d. vrstu: ", i + 1);
			for (int j = 0; j < n; j++) {
				scanf_s("%d", &a[i][j]);
			}
		}

		printf("Unesite matricu b: \n");
		for (int i = 0; i < n; i++) {
			printf("Unesite %d. vrstu: ", i + 1);
			for (int j = 0; j < n; j++) {
				scanf_s("%d", &b[i][j]);
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				c[i][j] = a[i][j] + b[i][j];
			}
		}

		printf("Matrica c je: \n");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				 printf( "%d\t", c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

