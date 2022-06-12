
#include <stdio.h>
#include <math.h>

int main(){
	
	double numero = 0.3*3 + 0.1;
	
	if (numero == 1){
	printf("El numero es igual a 1\n");
	}
	
	if (numero != 1){
	printf("El numero es distinto a 1\n");
	}
	
	// Los numeros son diferentes porque la variable "numero" no es 1 sino 0.99999999...
	
	
	printf("%.100f\n",numero);

	if(fabs(numero-1)<0.00001){
	printf("Iguales\n");	
	}
	
	else{
	printf("Diferentes\n");
	}
	
}
