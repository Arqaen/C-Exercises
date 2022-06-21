// #include "cabecera.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){

    int nelementos, i, *p;
    // Lectura del número de elementos que formarán el array
    printf("Introduzca el numero de elementos\n");
    scanf("%d", &nelementos);

    // Reserva de memoria para nelementos
    p = (int *) calloc(nelementos, sizeof(int));
    if (p == NULL){
        printf("Error al asignar memoria");
        return -1;
    }

    // Inicialización del array
    printf("\n\nIntroduzca los datos del array\n\n");
    for (i = 0; i < nelementos; i++){
        printf("\nDato %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    // Impresión de los datos por pantalla
    printf("Los datos almacenados en el array son:\n\n");
    for (i = 0; i < nelementos; i++){
        printf("\t%d", p[i]);
    }
    printf("\n\n");

    // Liberación de memoria
    free(p);
    return 0;
}
