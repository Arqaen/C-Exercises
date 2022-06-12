 #include "funciones8.h"
 
 int main(){
  			FILE * demo;
        demo = fopen("imdb.txt","r");   
        if(demo==NULL){printf("ERROR de apertura del fichero \n");}     

        pelis array[300];        
        int numRegs;    
				int existe;
				
        existe = leerBinario();
        if(existe == 0){numRegs = copiaraDAT(demo,array,300);}
        



 }
