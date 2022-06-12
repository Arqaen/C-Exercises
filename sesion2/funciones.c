#include "declarar.h"
#include <stdio.h>

int maximo(int cadena[],int k){
	int i = 0;
	int z;
	int x = cadena[i];
		
	while(i<k){
		if(cadena[i]>x){
			x = cadena[i];	
		}
		i = i+1;
	}
	
	return x;
}

float media(int cadenax[], int k){		
	int i = 0;
	float x = 0;
	float y = 0;
	int z;

	while(i<k){
		x = x + cadenax[i];
		i = i+1;
	}
	
	y = x/k;
	
	return y;
}

