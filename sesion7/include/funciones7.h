#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _SESION7	
  #define _SESION7
  
	typedef struct{
		int ranking;
		int year;
		int votes; 
		int metascore;
		char name[70];
	} pelis;

  int leeFichero1(FILE *pf, pelis *array, int num);
  int leeFichero2(FILE *pf, pelis **pp);
  void masAntigua(pelis *array, int numElems);
  void mayorMetascore(pelis *array, int numElems);

#endif	
