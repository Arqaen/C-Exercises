#include <stdio.h>
#include <string.h>

float imprimir(float cad[], int u);
float maximo(float a[],int k);
float minimo(float a[],int k);
float media(float a[],float k);
float arrayfloat(float cad[],int u);
void arraychar(float cad[],int u);

int main(){

int x;
float a,b,c,d,e;
float cadena[12] = {1,4.5,0.56,1.23,3.5,52.45,7,0,9.8,1.205,10,-53.2};
x = sizeof(cadena)/sizeof(*cadena);

/*
a = imprimir(cadena,x);
b = maximo(cadena,x);
c = minimo(cadena,x);
d = media(cadena,x);


printf("\nMAXIMO: %f\n",b);
printf("MINIMO: %f\n",c);
printf("MEDIA: %f\n",d);
e = arrayfloat(cadena,x);
*/

arraychar(cadena,x);

}

float imprimir(float cad[],int u){
	
	int i = 0;
	while(i<u){
		printf("%f\n",cad[i]);
		i = i+1;
	}

}


float maximo(float a[],int k){
	int i = 0;
	int z;
	float x = a[i];
		
	while(i<k){
		if(a[i]>x){
			x = a[i];	
		}
		i = i+1;
	}
	
	return x;
}

float minimo(float a[],int k){
	int i = 0;
	int z;
	float x = a[i];
		
	while(i<k){
		if(a[i]<x){
			x = a[i];	
		}
		i = i+1;
	}
	
	return x;
}


float media(float a[], float k){		
	int i = 0;
	float x = 0;
	float y = 0;
	int z;

	while(i<k){
		x = x + a[i];
		i = i+1;
	}
	
	y = x/k;
	
	return y;
}



float arrayfloat(float cad[],int u){

	float *l;
	int i = 0;
	
	
	while(i<u){
		
		l = &cad[i];
		printf("%f\n",*l);
		printf("%p\n",l);
		
		i = i+1;
	}

}

void arraychar(float cad[],int u){
	
	int i = 0;
	char *l = (char *)cad;
	while(i<u){
		
		/*
		strcat(char *dest, float cad[i]);
		printf("%c\n",dest[i]);		
		dest[i] = cad[i];
		strcpy(l,"%f",cad[i]);
		printf("%s\n",*dest[i]); 
		*/			
		
		printf("%p\n",l);
		i = i+1;
	}
	
}
