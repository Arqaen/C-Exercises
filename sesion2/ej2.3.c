#include <stdio.h>
#include "declarar.h"

int main(){
	int x = 0;
	float y = 0;
	int a = 0;
	int cadenaz[] = {1,2,5,2,4,10};	
	a = sizeof(cadenaz)/sizeof(*cadenaz);
	
	x = maximo(cadenaz,a);
	
	y = media(cadenaz,a);
	
	printf("%d\n%f\n",x,y);
	


}
