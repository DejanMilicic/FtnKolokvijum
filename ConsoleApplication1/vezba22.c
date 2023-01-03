//zadatak 11.1: Ispisati faktorijal broja 5, 10 i 50
int faktorijal(int n) {
	if (n == 2)
		return 2;
	else
		return n * faktorijal(n - 1);

}

//5! = 5 4 3 2 
int vezba22() {
	printf("\n5! = %d", faktorijal(5));
	printf("\n10! = %d", faktorijal(10));
	printf("\n50! = %d", faktorijal(50));
	// 50 ne radi jer int ne podrzava toliku vrednost\

	return 0;
}





//zadatak 11.2: iscrtavanje jelke

void crtajRed(int ukBrElemenata, int popunjeniElementi) {
	int prazniElementi = (ukBrElemenata - popunjeniElementi) / 2;
	for (int i = 0; i < prazniElementi; i++) {
		printf(" ");
	}
	for (int i = 0; i < popunjeniElementi; i++) {
		printf("*");
	}
	printf("\n");
}

void crtajJelku(int visinaJelke) {
	int brojElemenata = visinaJelke * 2 + 2;
	for (int i = 1; i < visinaJelke * 2 - 1; i = i + 2) {
		crtajRed(brojElemenata, i);  //broj razmaka i broj zvezdica
	}
}


void vezba22_2() {
	crtajJelku(20);
	printf("\n");
}

/*
     *
    ***
   *****
  *******

 */


//zadatak 11.3: ispisivanje prvih N = 100 prostih brojeva

/*
void prostbroj(n) {
	for (int k = 2; k <= n/2; k++) {
		if (n % k == 0) return;
	}
	printf("%d\n", n);
	return;
}

int vezba22_3() {
	for (int i = 1; i <= 100; i++) {
		prostbroj(i);
	}
}

*/


int prostBroj(int n) {
	for (int k = 2; k <= n / 2; k++) {
		if (n % k == 0) return 0;
	}
	return 1;
}

void ispisiPrvihNProstih(int n) {
	int vrednost = 2;
	int prostih = 0;
	while (prostih < n) {
		if (prostBroj(vrednost)) {
			printf("%d", vrednost);
			prostih++;
		}
		vrednost++;
	}
}

int vezba22_3() {
	ispisiPrvihNProstih(150);

	return 0;
}


