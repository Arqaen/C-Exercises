#include "funciones6.h"

int main(int argc , char *argv[]){
	
	for (int i = 0; i < argc; i++){		
	   printf("[%d] = %s\n", i, argv[i]);
	}
	if(argc>2){exit(0);}
	else{
		int z=0;
		z=factorial(atoi(argv[1]));
		printf("%d\n",z);
	}

}
