#include "funciones6.h"

void escribirFichero(char a[]){

	FILE * demo;
	demo = fopen (a,"a");
	
	if(demo==NULL){printf("ERROR de apertura del fichero %s\n",a);return;}
	
	char cad[100];
	printf("Dame un texto a grabar,seguido de Enter: ");
	fgets(cad,100,stdin);
	fputs(cad,demo);	
	if(ferror(demo)){printf("ERROR al grabar en el fichero\n");}
	
	fclose(demo);
}

void muestraFichero(char a[]){

   FILE* demo;
   demo = fopen(a,"r"); 
   
   if(demo==NULL){printf("ERROR de apertura del fichero %s\n",a);return;}	
   
   char cad[100];
    fgets(cad,100,demo);
   
 	if(ferror(demo)){printf("ERROR al leer el fichero\n");}
   while(!feof(demo) && !ferror(demo)){
 		printf("%s", cad);
   	fgets(cad,100,demo);
 	}
 	
   fclose(demo);
}

void modificarFichero(char a[],char b[],char c[]){
	 FILE* demo;
   demo = fopen(a,"r"); 
   
   if(demo==NULL){printf("ERROR de apertura del fichero %s\n",a);return;}	
   
   char cad[100]="";
   char e[1000];
	fgets(cad,100,demo);
   
 	if(ferror(demo)){printf("ERROR al leer el fichero\n");}
   while(!feof(demo) && !ferror(demo)){
   	
 		int z = strlen(cad);
 		for(int i=0;i<z;i++){
 			if (b[0]==cad[i]){
 				cad[i]=c[0];
 			}
 		}
 		strcat(e,cad);
   	fgets(cad,100,demo);
 	}
   fclose(demo);
 	cambiarFichero(a,e);
}


void cambiarFichero(char a[],char cad[]){

	FILE * demo;
	demo = fopen (a,"w");
	
	if(demo==NULL){printf("ERROR de apertura del fichero %s\n",a);return;}
	
	fputs(cad,demo);	
	if(ferror(demo)){printf("ERROR al grabar en el fichero\n");}
	
	fclose(demo);
}
