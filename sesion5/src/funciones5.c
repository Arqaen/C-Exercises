#include "funciones5.h"

/*
void uneArgumentos(int argc,char *argv[],int z){

	char arg[50];
	

	for (int x = 0; x < argc; x++){
	   strcat(arg,argv[x]);
	}
	
	for (int x = 0; x < z; x++){	  
	   printf("argv[%d] = %c\n", x, arg[z]);
	}
}*/


void imprimeDoble(char cad[]){

	int k=strlen(cad);
	int w=1;
	
	for (int x = 0; x < k; x++){			
		if(!isdigit(cad[x])){	
			w=0;
	 	} 
 	}
 	
	if(w==1){
		printf("%s-%d\n",cad,atoi(cad)*2);
	}
}    


