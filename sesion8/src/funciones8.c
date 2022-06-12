#include "funciones8.h"

int copiaraDAT(FILE *pf, pelis *array, int num){
				int i=0;
        char cabecera[200];
        rewind(pf);

				FILE * bin;
				bin = fopen("imdbMOVIES.dat","w");
				if(bin==NULL){printf("ERROR de apertura del fichero \n");}    
				
        fgets(cabecera,200,pf);
        fwrite(cabecera,100,1,bin);
  			
        while(!feof(pf) && !ferror(pf) && i<num){
                fgets(cabecera,200,pf);
                fwrite(cabecera,200,1,bin);
                i++;
        }
        fclose(bin);

	return i;	
}

int leerBinario(){	

				char cabecera[400];
				FILE * bin;
				bin = fopen("imdbMOVIES.dat","r");
				if(bin==NULL){printf("ERROR de apertura del fichero \n");return 0;} 
				
        while(fread(cabecera,100,1,bin) && !feof(bin) && !ferror(bin)){
      					printf("%s",cabecera);
        }
        printf("\n\n");
        fclose(bin);
        return 1;
}


