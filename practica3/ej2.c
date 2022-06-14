#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main (){

    int numeros[MAX], i;
    for (i=0; i<MAX; i++){
        printf("Introduzca el elemento %d: ", i);
        scanf(" %d" ,&numeros[i]);
    }
    printf("\n**** LISTADO DE LOS NUMEROS LEIDOS ******\n\n");
    
    for (i=0; i<MAX; i++){
        printf(" %d, ",numeros[i]);
        printf("\n\n");
    }

    return 0;
}
