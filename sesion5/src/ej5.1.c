#include "funciones5.h"

int main(int argc , char *argv[]){
			
	int z=0;
	int x=0;
	
	for (int i = 0; i < argc; i++){		
	   printf("[%d] = %s\n", i, argv[i]);
	}
	
	for (int i = 0; i < argc; i++){		
	   x=strlen(argv[i]);
	   z = x+z;
	}
	
	z = z+1;
	printf("%d\n",z);
	char arg[z];
	
	for (int i = 0; i < argc; i++){
	   strcat(arg,argv[i]);
	}
	
	for (int i = 0; i < argc; i++){		
		imprimeDoble(argv[i]);
	}
	
}
