#include <stdio.h>

int main(){

	int i=0;
	while(i<1000){
	printf("Cuando copio solo me estoy enganyando a mi mismo\n");
	i = i+1;
	}
	
	int a,b=0;
	scanf("%d",&a);
	while(b<a){
	printf("Cuando copio solo me estoy enganyando a mi mismo\n");
	b = b+1;	
	}

   int cadena[] = {6,7,8,9,10};
	printf("%i\n",cadena[0]);
	printf("%i\n",cadena[2]);
	printf("%i\n",cadena[4]);
	
	
	
	int x,z;	
	z = sizeof(cadena)/sizeof(*cadena);
	for(x=0;x<z;x++){
	printf("%i\n",cadena[x]);	
	}

	int g = 0; 
	do {
	printf("%i\n",cadena[g]);
	g = g + 1;
	
	} while (g<z);
	
	// no me han resultado dificiles, pero no le veo mucho sentido usar un do while para arrays a no ser que quieras mostrar solo el primer valor o todos los valores, segun una condicion en ese caso te ahorrarias usar un if else haciendo todo eso en un bucle	 
	
}
