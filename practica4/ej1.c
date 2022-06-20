#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SALIR 4
#define MAX_CAD 20
#define MAX_PAL 100

typedef struct{
    char ingles[MAX_CAD];
    char espanyol[MAX_CAD];
}tPalabra;

tPalabra Diccionario[MAX_PAL];

char identificador_de_la_cadena[MAX_CAD]; 

int menu();
void LeeCadena(tPalabra Dicc[], int num);
void traducir_palabra (tPalabra Dicc[], int num);
int anyadir_palabra (tPalabra Dicc[], int num);
void mostrar_diccionario (tPalabra Dicc[], int num);

int num_pal=0;

int main(){

    int op=0;
    while ((op=menu()) != SALIR){
        switch(op){

            case 1: 
                num_pal = anyadir_palabra(Diccionario, num_pal);
                break;

            case 2:
                traducir_palabra(Diccionario, num_pal);
                break;

            case 3:
                mostrar_diccionario(Diccionario, num_pal);
                break;

            case 4:
                exit(0);

        }
    }

}

int menu(){
    int op;
    do{

        printf("\n1. Añadir una nueva palabra al diccionario.\n");
        printf("2. Traducir una de las palabras que haya sido introducida previamente.\n");
        printf("3. Mostrar el diccionario entero (todas sus palabras junto con su traducción).\n");
        printf("4. Salir del programa.\n\n");
        scanf("%d",&op);
        printf("\n");

    }while (op < 1 || op > SALIR);
    return op;
}



int anyadir_palabra (tPalabra Dicc[], int num){
    if (num >= 100){
        printf("El diccionario esta lleno");
        return num;
    }
    else{
        char ing[MAX_CAD];
        char esp[MAX_CAD];

        printf("Por favor, introduzca una palabra nueva\n");
        printf("En ingles: ");
        scanf("%s",ing);        
        printf("En espanyol: ");
        scanf("%s",esp);     

        strcpy(Dicc[num].ingles,ing);
        strcpy(Dicc[num].espanyol,esp);

        return num+1;

    }
}

void traducir_palabra (tPalabra Dicc[], int num){
    printf("Por favor, introduzca una palabra a traducir: ");
    char buscar[MAX_CAD];
    int found=0;
    scanf("%s",buscar); 

    for(int i=0;i<num;i++){

        if( strcmp(Dicc[i].ingles,buscar) == 0 ){
            printf("Traduccion: %s\n",Dicc[i].espanyol);
            found=1;
        }

        if( strcmp(Dicc[i].espanyol,buscar) == 0 ){
            printf("Traduccion: %s\n",Dicc[i].ingles);
            found=1;
        }

    }

    if(found==0){
        printf("No existe la palabra en el diccionario\n");
    }


}


void mostrar_diccionario (tPalabra Dicc[], int num){
    printf("ESP\t - \tING\n\n");

    for(int i=0;i<num;i++){
        printf("%-s\t - \t%-s\n",Dicc[i].espanyol,Dicc[i].ingles);
    }

}



