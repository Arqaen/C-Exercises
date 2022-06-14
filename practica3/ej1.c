#include <stdio.h>
#include <stdlib.h>

int potencia (int bas, int exp);
int factorial(int num);

int main(){
    int opcion = 0, base, exponente, numero;
    while (opcion < 3)
    {
        printf("Elija una opción:\n");
        printf("1 Calcular la potencia \n");
        printf("2 Calcular número del factorial \n");
        printf("3 Salir \n");
        scanf("%d",&opcion);

        if(opcion == 1){
            printf("Introduzca la base:");
            scanf("%d", &base);
            do{
                printf("Introduzca el exponente:");
                scanf("%d", &exponente);
            }while(exponente < 0);

            printf ("El resultado es:%d\n", potencia(base, exponente));
        }

        if(opcion == 2){
            printf("Introduzca un numero:");
            scanf("%d", &numero);
            printf("El factorial es:%d\n", factorial(numero));
        }

        if(opcion == 3){exit(0);}

    }//FIN while
    return 0;
}//FIN main

int potencia(int numero, int elevado){
    int copia=numero;
    for(int i=1;i<elevado;i++){
        numero = numero*copia;
    }
    return numero;
}

int factorial(int numero){
    int resultado;
    if(numero == 0){
        resultado=1;
    }
    else{
        resultado=numero;
    }

    while(numero>1){
        numero = numero - 1;
        resultado = resultado * numero;
    }
    return resultado;
}