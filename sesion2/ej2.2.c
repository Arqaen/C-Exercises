#include <ctype.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

	char cadena[10];
	scanf("%9[^\n]s",cadena);
	printf("%s\n",cadena);
	int x = 0;
	int i;
	i = strlen(cadena);
	
	while(x<i){
		cadena[x] = toupper(cadena[x]);
		x=x+1;
	}	
	
	x=0;
	while(x<i){
		if(cadena[x] == 'A'||cadena[x] == 'E'||cadena[x] == 'I'||cadena[x] == 'O'||cadena[x] == 'U'){
			cadena[x] = 'x';
		}
		x=x+1;
	}
	
	printf("%s\n",cadena);	
	
	char aa[4];	
	scanf(" %9[^\n]s",aa);
	strcat(cadena,aa);
	printf("%s\n",cadena);

	int y,yy;
	y = strlen(cadena);
	yy = y/2;
	cadena[yy] = '\0';
	printf("%s\n",cadena);
	
	// cuando hay un \0 en una cadena esto simboliza el fin de la cadena por lo que deja de leer

}
