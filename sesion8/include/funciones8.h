#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _SESION8       
  #define _SESION8
  
        typedef struct{
                int ranking;
                int year;
                int votes; 
                int metascore;
                char name[70];
        } pelis;

  int copiaraDAT(FILE *pf, pelis *array, int num);
	int leerBinario();
	
#endif
