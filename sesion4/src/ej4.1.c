#include "funciones4.h"


int main(){
	
	tCumpleanios UnaPersona;
	tCumpleanios Persona[MAX_CUMPLEANIOS];

	UnaPersona = tomaDatos();
	printf("La variable persona tiene estos datos:\n");	
	muestraDatos(UnaPersona);

	int i;
	printf("\nIntroduce los datos del array:\n");
	for(i=0;i<MAX_CUMPLEANIOS;i++){
		Persona[i] = tomaDatos();
	}
	
	printf("\nLos datos introducidos son:\n");
	for(i=0;i<MAX_CUMPLEANIOS;i++){
		muestraDatos(Persona[i]);
	}

	
	printf("\nLos nacidos en Abril son:\n");
	buscaAbril(Persona,MAX_CUMPLEANIOS);
	
	printf("El ultimo es:\n");
	buscaUltimo(Persona,MAX_CUMPLEANIOS);	
	
	printf("Las personas iguales son:\n");
	buscaIgual(Persona,MAX_CUMPLEANIOS);
}
