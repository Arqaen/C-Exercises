#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void muestra(char cadena[]);
void muestramod(char cadena[]);
void mod(char cadena[]);
void asc(char cadena[]);

int main(){

	char cadena_pal[] = "Dabale arroz a la zorra el abad.";
	char cadena_nopal[] = "Esto puede ser que cese.";

	muestra(cadena_pal);
	muestramod(cadena_pal);
	asc(cadena_pal);
}

void muestra(char cadena[]){

	printf("%s\n",cadena);

}

void muestramod(char cadena[]){

	int f=0;
	int x=strlen(cadena);
	char cadmod[x];
	 
	for(int i=0;i<x;i++){
		cadmod[i]=tolower(cadena[i]);
		if(cadena[i]!=',' && cadena[i]!=' '){
			cadmod[f]=cadena[i];
			f=f+1;
		}
	}

	cadmod[f] = '\0';

	printf("%s\n",cadmod);

}

void mod(char cadena[]){

	int f=0;
	int x=strlen(cadena);
	char cadmod[x];
	 
	for(int i=0;i<x;i++){
		cadena[i]=tolower(cadena[i]);
		if(cadena[i]!=',' && cadena[i]!=' '){
			cadena[f]=cadena[i];
			f=f+1;
		}
	}

	cadena[f] = '\0';

}


void asc(char cadena[]){

	int n = strlen(cadena);
	int palin = 1;
	char cadaux[n];
	strcpy(cadaux,cadena);
	mod(cadaux);
	n = strlen(cadaux);
	for(int i=0;i<n;i++){
		if(cadaux[i]!=cadaux[n-i-1]){palin=0;break;}
		
	}	
	
	if(palin == 1){printf("La cadena %s SI es palindromo\n\n",cadena);}
	else{printf("La cadena -%s- NO es palindromo\n\n",cadena);}
	
}



