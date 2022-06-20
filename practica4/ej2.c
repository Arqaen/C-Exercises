#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_AL 100
#define MAX_CAD 20

int num_al=0;
typedef struct{
    char nombre[MAX_CAD];
    char dni[MAX_CAD];
    float nota;
}Alumnos;

Alumnos diccionario[MAX_AL];

int leerAl(Alumnos dicc[],int num);
void impAl(Alumnos dicc[],int num);
void statsAl(Alumnos dicc[],int num);

int main(){
    num_al = leerAl(diccionario,num_al);
    if(num_al>0){
        impAl(diccionario,num_al);
        statsAl(diccionario,num_al);
    }
}

int leerAl(Alumnos dicc[],int num){
    printf("Numero de alumnos <max %d>: ",MAX_AL);
    scanf("%d",&num);
    printf("\n");

    float nota;
    char nombre[MAX_CAD];
    char dni[MAX_CAD];

    for(int i=0;i<num;i++){
        printf("Alumno %d\n",i+1);
        printf("\tNombre: ");
        scanf("%s",nombre);
        printf("\tDNI: ");
        scanf("%s",dni);
        printf("\tNota: ");
        scanf("%f",&nota);

        strcpy(dicc[i].nombre,nombre);
        strcpy(dicc[i].dni,dni);
        dicc[i].nota=nota;
    }
    printf("\n");
    return num;
}

void impAl(Alumnos dicc[],int num){

    printf("Nombre\tDNI\tNota\n");
    for(int i=0;i<num;i++){
        printf("%s\t%s\t%f\n",dicc[i].nombre,dicc[i].dni,dicc[i].nota);
    }

}

void statsAl(Alumnos dicc[],int num){
    
    float media=0;    
    float mat=0;
    float sob=0;
    float not=0;
    float apr=0;
    float sus=0;
    printf("\n");
    for(int i=0;i<num;i++){
        media=media+dicc[i].nota;

        if(dicc[i].nota==10){mat=mat+1;}
        if(dicc[i].nota>=9 && dicc[i].nota<10){sob=sob+1;}
        if(dicc[i].nota>=7 && dicc[i].nota<9){not=not+1;}
        if(dicc[i].nota>=5 && dicc[i].nota<7){apr=apr+1;}
        if(dicc[i].nota<5){sus=sus+1;}
    }

    media=media/num;
    mat=(mat/num)*100;
    sob=(sob/num)*100;
    not=(not/num)*100;
    apr=(apr/num)*100;
    sus=(sus/num)*100;

    printf("Media: %f\n",media);
    printf("Matriculados: %f\n",mat);
    printf("Sobresalientes: %f\n",sob);
    printf("Notables: %f\n",not);
    printf("Aprobados: %f\n",apr);
    printf("Suspensos: %f\n",sus);

}
