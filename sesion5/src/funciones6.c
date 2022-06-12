#include "funciones6.h"


int factorial(int num){
	int z=1;
	if(num==0){z=1;}
	else{
		while(num>1){
			z=z*num;
			num=num-1;	
		}
	}
	return z;
}
