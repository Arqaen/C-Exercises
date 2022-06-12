#include "funciones7.h"

int main(){
	
	FILE* demo;
	demo = fopen("imdb.txt","r"); 	
	if(demo==NULL){printf("ERROR de apertura del fichero \n");}	

	pelis array[300];	
	pelis *arrayDin;	
	int numRegs;	

	numRegs = leeFichero1(demo,array,300);
	printf("%d\n",numRegs);

	numRegs = leeFichero2(demo,&arrayDin);
	printf("%d\n",numRegs);

	masAntigua(array,numRegs);	
	mayorMetascore(array,numRegs);	

	free(arrayDin);
	fclose(demo);
	
}
