#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){

    int elem;
    int array[10];
    printf("Cuantos elementos se desean introducir\n");
    scanf("%d",&elem);
    printf("\n");
    for(int i=0;i<elem;i++){
        scanf("%d",&array[i]); 
    }
    printf("\n");
    for(int i=1;i<elem;i++){
        int j=i-1;
        int tmp = array[i];
        while(array[j]>tmp && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=tmp; 
    }

    int x;
    printf("Introduce un numero para buscar\n");
    scanf("%d",&x);
    int bajo = 0;
    int alto = elem-1;
    while(bajo <= alto){
        int central = (alto + bajo) / 2;
        if(x==array[central]){
            printf("Numero %d encontrado\n",x);
            exit(0);
        }
        if(x>array[central]){
            bajo = central + 1;
        }
        if(x<array[central]){
            alto = central - 1;
        }
    }
    printf("El numero %d no estaba en el array\n",x);
}