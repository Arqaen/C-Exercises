#include <stdio.h>
#include <stdlib.h>
void cuenta_billetes_monedas(int cantidad, int valor[]);

int main(){
    int valor[9] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int cantidad;
    printf ("Practica 3, ejercicio 2\n");
    printf ("Introduce una cantidad de euros (sin centimos): ");
    scanf ("%d", &cantidad);
    if (cantidad<=0){
        printf ("ERROR: La cantidad debe ser mayor que cero.\n");
        system ("pause");
        return -1;
    }
    cuenta_billetes_monedas(cantidad, valor);
    exit(0);
    return 0;
}

void cuenta_billetes_monedas(int cantidad, int valor[]){
    int i = 0;
    while(cantidad>0){
        int n = cantidad/valor[i];
        cantidad = cantidad - (valor[i]*n);
        if(n>0){
            printf("%d billetes/monedas de %d euros\n",n,valor[i]);
        }
        i++;

    }

}