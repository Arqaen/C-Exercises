#include <stdio.h>
#include <string.h>

int main(){

	char cadena[10] = "ricardo";
	int x;
	x = strlen(cadena);
	int z=0;
	int y=x;
	printf("%d\n",x);
	
	while(z<x){
		printf("%c\n",cadena[z]);
		z=z+1;
	}

	while(y>-1){
		printf("%c\n",cadena[y]);
		y=y-1;
	}
	
}
