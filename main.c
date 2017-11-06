#include<stdio.h>

int main(){

	int vector[7]={7,5,4,6,10,30,29};
	int aux,menor,a;
	
	for(int i=0;i<7-1;i++){
		a=i;
		//selecciona el menor
		for(int j=i+1; j<7;j++)
			
			if (vector[j]<vector[a])
				a = j;
		aux=vector[i];
		vector[i]=vector[a];
		vector[a]=aux;
	}
	
	for(int k=0; k<7;k++){
		printf("Los valores ordenados del vector son: ....\n [%d]\n",vector[k]);
	}
	
	return 0;
}
