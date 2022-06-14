#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#define SALIR 6

int Menu();
int introducir_array(int array[]);
void visualizar_array(int array[], int n_eltos);
void ordenar_insercion(int array[], int num);
int busqueda_binaria(int x, int valores[], int num);
int introducir_valor(int x, int array[], int pos);

int main(){
    int Array[MAX], n_eltos=0;
    int op=0, x, pos;
    while ((op=Menu()) != SALIR){
        switch(op){

            case 1:
                n_eltos = introducir_array(Array);
                break;

            case 2:
                visualizar_array(Array, n_eltos);
                break;

            case 3:
                ordenar_insercion(Array, n_eltos);
                break;

            case 4:
                printf("Introduce un numero para buscar\n");
                scanf("%d",&x);
                int pos = busqueda_binaria(x, Array,n_eltos);
                if (pos == -1){
                    printf("El numero %d no estaba en el array\n",x);
                }
                
                else{
                    printf("Numero %d encontrado\n",x);
                }

                break;

            case 5:
                printf("Introduce un numero para buscar\n");
                scanf("%d",&x);
                pos = busqueda_binaria(x, Array,n_eltos);
                if (pos == -1){
                    printf("El numero %d no estaba en el array\n",x);
                }
                
                else{
                    printf("Introduce un numero para sustituir\n");
                    int nuevo;
                    scanf("%d",&nuevo);
                    int response = introducir_valor(nuevo, Array, pos);
                }
                break;

            case 6:
                printf ("Saliendo del programa......\n\n ");
                exit(0);

        
        }
    }
}

int Menu(){
 int op;
 do{
    printf("\n");
    printf("\t1. Introducir array\n");
    printf("\t2. Visualizar array\n");
    printf("\t3. Ordenar array\n");
    printf("\t4. Buscar un elemento en el array\n");
    printf("\t5. Modificar un elemento del array\n");
    printf("\t6. Salir\n");
    printf("\n Selecciones la opcion deseada\n\n");
    printf("----------------------------------------- ");
    scanf("%d",&op);
 }while (op < 1 || op > SALIR);
 return op;
}
//Definición de las Funciones a realizar

int introducir_array(int array[]){

    int elem;
    do{
        printf("Cuantos elementos se desean introducir\n");
        scanf("%d",&elem);
    }while(elem<0 || elem>10);

    printf("\n");
    for(int i=0;i<elem;i++){
        scanf("%d",&array[i]); 
    }

    return elem;
}

void visualizar_array(int array[], int n_eltos){
    
    for(int x=0;x<n_eltos;x++){
        printf("%d\n",array[x]);
    
    }

}

void ordenar_insercion(int array[], int num){
    for(int i=1;i<num;i++){
        int j=i-1;
        int tmp = array[i];
        while(array[j]>tmp && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=tmp; 
    }
}

int busqueda_binaria(int x, int array[], int num){
     
    int bajo = 0;
    int alto = num-1;
    while(bajo <= alto){
        int central = (alto + bajo) / 2;
        if(x==array[central]){
            return central;
        }
        if(x>array[central]){
            bajo = central + 1;
        }
        if(x<array[central]){
            alto = central - 1;
        }
    }
    return -1;
}

int introducir_valor(int x, int array[], int pos){
    array[pos]=x;
    return 0;
}