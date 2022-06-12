#include "funciones7.h"

int leeFichero1(FILE *pf, pelis *array, int num){
  int i=0;
	char cabecera[200];
	rewind(pf);
	
	fgets(cabecera,200,pf);
	fscanf(pf, "%d %d %d %d %s", &array[i].ranking, &array[i].year, &array[i].votes, &array[i].metascore, array[i].name);
	
	while(!feof(pf) && !ferror(pf) && i<num){
		fgets(cabecera,200,pf);
		i=i+1;
		fscanf(pf, "%d %d %d %d %s", &array[i].ranking, &array[i].year, &array[i].votes, &array[i].metascore, array[i].name);
	}
  
  for(int x=0;x<num;x++){
  printf("%d %d %d %d %s\n", array[x].ranking, array[x].year, array[x].votes, array[x].metascore, array[x].name);
  }
  return i;
 }
 
int leeFichero2(FILE *pf, pelis **pp){
	int i=0;
	char cabecera[200];
	int numRegs=0;		
	pelis regAux;	//registro auxiliar
	pelis *array;	//puntero para crear el array dinamico

	rewind(pf);	
	fgets(cabecera,200,pf);
	fscanf(pf, "%d %d %d %d %s", &regAux.ranking, &regAux.year, &regAux.votes, &regAux.metascore, regAux.name);	
	while(!feof(pf) && !ferror(pf)){
		fgets(cabecera,200,pf);
		i=i+1;
		fscanf(pf, "%d %d %d %d %s", &regAux.ranking, &regAux.year, &regAux.votes, &regAux.metascore, regAux.name);	
	}
	numRegs = i+1;	
	array = ( pelis *) calloc ( sizeof(pelis),numRegs);
	if (array == NULL ){  printf("ERROR: falta memoria\n"); return 0; }
	i = 0;
	rewind(pf);
	fgets(cabecera,200,pf);
	fscanf(pf, "%d %d %d %d %s", &array[i].ranking, &array[i].year, &array[i].votes, &array[i].metascore, array[i].name);
	while(!feof(pf) && !ferror(pf)){
		fgets(cabecera,200,pf);
		i=i+1;
		fscanf(pf, "%d %d %d %d %s", &array[i].ranking, &array[i].year, &array[i].votes, &array[i].metascore, array[i].name);
	}
	
	
	clearerr(pf);
	*pp = array;
	return numRegs;

}
  
  
void masAntigua(pelis *array, int numElems){
	int buscador=array[0].year;
	int masA=0;
	for(int i=0;i<numElems;i++){ if(buscador > array[i].year){buscador=array[i].year;masA=i;} }
	printf("%d %d %d %d %s\n", array[masA].ranking, array[masA].year, array[masA].votes, array[masA].metascore, array[masA].name);
}

void mayorMetascore(pelis *array, int numElems){
	int buscadorany=array[0].year;
	int masA=0;
	for(int i=0;i<numElems;i++){ if(buscadorany < array[i].year){buscadorany=array[i].year;masA=i;} }
	printf("%d %d %d %d %s\n", array[masA].ranking, array[masA].year, array[masA].votes, array[masA].metascore, array[masA].name);
	
	int buscador=array[0].metascore;
	masA=0;
	for(int i=0;i<numElems;i++){ if(buscador < array[i].metascore){buscador=array[i].metascore;masA=i;} }
	printf("%d %d %d %d %s\n", array[masA].ranking, array[masA].year, array[masA].votes, array[masA].metascore, array[masA].name);
	
	
	for(int i=0;i<numElems;i++){ 
		if(array[i].year>2012){
			printf("%d %d %d %d %s\n", array[i].ranking, array[i].year, array[i].votes, array[i].metascore, array[i].name);
		}
	}	
}
