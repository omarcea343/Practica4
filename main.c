#include <stdio.h>

int main() {
	int min, tmp; // elemento de menor peso y elemento temporal
	int v[5] = { 99, 56, 34, 1, 12 };
	int N = 5;
	
	for (int a = 0; a < N; a++) {
		printf("%d , ", v[a]);
	}
	
	/* recorremos todo el vector */
	
	for (int i = 0; i < N - 1; i++) {
		/* suponemos que es el primero */
		min = i;
		/* recorremos la parte no ordenada */
		for (int j = i + 1; j < N; j++) {
			/* buscamos el de menor peso */
			if (v[j] < v[min])
				min = j;
		}
		/* intercambio posicion i por el de menor peso */
		tmp = v[i];
		v[i] = v[min];
		v[min] = tmp;
	}
	printf("\n");
	for (int a = 0; a < N; a++) {
		printf("%d , ", v[a]);
	}
	return 0;
}
