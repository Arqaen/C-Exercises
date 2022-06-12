#include <stdio.h>

int main(){


	int array_de_enteros[] = {3,5,9,7,23,11,123,12,13,53,2,32};
	int x=0;
	int i=0;
	int p = sizeof(array_de_enteros)/sizeof(*array_de_enteros);
	
	while(x<p){
	
		if(array_de_enteros[x] % 2 != 0){
			printf("%d\n",array_de_enteros[x]);
		}
		
		x = x+1;
	}
	
	while(i<p){
	
		if(i % 2 != 0){
			printf("%d\n",array_de_enteros[i]);
		}
		i=i+1;
	}
	
	int z=0;
	int g = array_de_enteros[0];
	while(z<p){
	
		if(g<array_de_enteros[z]){
			g = array_de_enteros[z];
			
		}
		z = z+1;
	}
	
	printf("%d\n",g);
	
	
		
	int t=0;
	int e = array_de_enteros[0];
	while(t<p){
		if(array_de_enteros[t] % 2 != 0){
			if(e<array_de_enteros[z]){
				e = array_de_enteros[z];
			
			}
		}
		t = t+1;
	}
	
	printf("%d\n",g);
	
	int divs[] = {};
	int h=0;
	int k=0;	
	while(k<p){
		if(array_de_enteros[k]%3==0){
			divs[h]= array_de_enteros[k];
			printf("%d\n",array_de_enteros[k]);
			h = h+1;
		}
		k =k+1;
	}
	
		
	
	
}
