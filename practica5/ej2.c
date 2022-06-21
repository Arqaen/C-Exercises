#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_CARAC 30
typedef struct
{
    char nombre[MAX_CARAC];
    float nota;
} tficha;

int main()
{

    int nelementos, i,tmp;
    tficha *p;
    do
    {
        printf("Introduzca el numero de elementos\n");
        scanf("%d", &nelementos);
    } while (nelementos <= 0);

    p = (tficha *)calloc(nelementos, sizeof(tficha));
    if (p == NULL)
    {
        printf("Error al asignar memoria");
        return -1;
    }

    printf("\n\nIntroduzca los datos del array\n\n");
    for (i = 0; i < nelementos; i++)
    {
        printf("\nDato %d: ", i + 1);
        printf("\nNombre: ");
        scanf("%s", p[i].nombre);
        // strcpy(p[i].nombre, tmp);
        printf("Nota: ");
        scanf("%f", &p[i].nota);
        printf("\n\n");
    }

    printf("Los datos almacenados en el array son:\n\n");
    for (i = 0; i < nelementos; i++)
    {
        printf("\t%s - %f\n", p[i].nombre,p[i].nota);
    }
    printf("\n\n");

    free(p);
    return 0;
}