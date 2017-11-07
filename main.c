#include <stdio.h>
#define n 8

int main(){
	
	int min, temp, i, j, a;
	int vector[8] = {9, 21, 77, 8, 6, 4, 9, 55};
	
	printf("Este programa ordena un vector por medio del metodo de seleccion: \n");
	printf("\n");
	printf("Vector a Ordenar: \n\n");
	
	for(a = 0; a < n; a++){
		printf("\t %d", vector[a]);
	}
	
	for(i = 0; i < n; i++){
		min = i;
		for(j = i + 1; j < n; j++){
			if(vector[j] < vector[min]){
				min = j;
			}
		}
		temp = vector[i];
		vector[i] = vector[min];
		vector[min] = temp;
	}
	printf("\n");
	printf("\n");
	printf("Vector Ordenado: \n");
	printf("\n");
	
	for(a = 0; a < n; a++){
		printf("\t %d", vector[a]);
	}
	
	return 0;
}
