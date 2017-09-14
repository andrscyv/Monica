// Permutaciones.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <strstream>
#include <stdlib.h> 
#include <time.h>

using namespace std;
static int cont = 0;
static char *inicio;
static char *aquiMeQuede;
void swap(char *a, int *b) {
	char aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
void guardaT(char *a, int n) {
	
	*aquiMeQuede = *a;
	cout << *aquiMeQuede;
	for (int i = 1; i < n; i++) {
		aquiMeQuede = aquiMeQuede + 1;
		*aquiMeQuede = *(a+i);
		cout << *aquiMeQuede;

	}

}
void sacaT(char *inicio, int n) {
	for (int i = 0; i < n; i++) {
		cout << *inicio;
		inicio = inicio +1;
	}
}

void permuta(char *a, int i, int f) {
	string s;
	if (i == f) {
		cout << a;
		cout << "\n";
		//guardaT(a,2);
		cont++;
	}
	else {
		for (int j = i; j <= f; j++) {
			swap(*(a + i), *(a + j));
			permuta(a, i + 1, f);
			swap(*(a + i), *(a + j));
		}
	}
}



int main()
{	
	int n = 5;
	clock_t t0, t1;
	float deltaT_seg;
	
	aquiMeQuede = (char *)malloc(sizeof(char)* 520);
	inicio = aquiMeQuede;
	char permutame[5] = { '0','1','2','3','4' }; //,'4','5','6','7','8'};
	t0 = clock();
	permuta(permutame, 0, 2);
	t1 = clock();
	deltaT_seg = (float)(t1 - t0) / CLOCKS_PER_SEC;
	cout << "Para n: " << n << " tarda " << deltaT_seg << " seg. " << endl;
	//cout << cont<<endl;
	//sacaT(inicio, 4);
	//cout << *inicio;


	return 0;
}
