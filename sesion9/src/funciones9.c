#include "funciones9.h"

void insertarInicio(int num,nodo_t **plista){

	nodo_t *q = (nodo_t *) malloc (sizeof(nodo_t));
	if(q==NULL){printf("Falta de memoria\n");return;}
	q->numero = num;
	q->siguiente = *plista;
	*plista = q;
	
}

void imprimir(nodo_t *cabecera){
	printf("Los datos de la lista son\n");
	nodo_t *q = cabecera;
	while(q!=NULL){
		printf("%d\n",q->numero);
		q=q->siguiente;	
	}
	printf("\n");
	
}

int insertarFinal(nodo_t *cabecera,int siz){

	int num=0;
	printf("Dame numero a insertar al final de la lista: ");
	if(scanf("%d",&num)!=1){exit(0);}
	nodo_t *p=cabecera;
	nodo_t *q=(nodo_t *) malloc (sizeof(nodo_t));
	if(q==NULL){printf("Falta de memoria\n");exit(0);}	
	
	while(p->siguiente!=NULL){
		p=p->siguiente;	
	}
	
	p->siguiente=q;
	q->numero=num;
	q->siguiente=NULL;
	return siz+1;
	
}

void borrar(nodo_t *cabecera){

	nodo_t *q = cabecera;
	while(q!=NULL){
		cabecera=cabecera->siguiente;	
		free(q);
		q=cabecera;
	}
	printf("La lista ha sido eliminada\n");
	
}

void listaOrdenada(nodo_t *cabecera,int siz){

	nodo_t *ordenada=NULL;
	nodo_t *q = cabecera;
		
	int array[100];
	int i=0;
	
	while(q!=NULL){
		array[i]=q->numero;
		q=q->siguiente;	
		i=i+1;
	}
	
	int copy;
	int cambio=1; 
  for(int z=0;z<siz;z++){
      cambio=0;
      for(int j=1;j<siz;j++){
          if(array[j-1]>array[j]){
       
              copy=array[j-1];
              array[j-1]=array[j];
              array[j]=copy;
              cambio=1;
              
          }
      }
	}
	
	for(int x=0;x<siz;x++){insertarInicio(array[x],&ordenada);}
	imprimir(ordenada);
	
}

void mostrar(int pun[],int siz){
    
    for(int i=0;i<siz;i++){
        printf("%d",pun[i]);
    }
    printf("\n");
}

void eliminaNodo(int num,nodo_t **cabecera){
	
	int delstatus=0;
	
	nodo_t *q = *cabecera;
	nodo_t *p=NULL;
	nodo_t *e=NULL;
	while(q!=NULL && q->numero!=num){
		p=q;
		q=q->siguiente;	
	}
	
	if(q==NULL){return;}
	if(q==*cabecera){*cabecera=(*cabecera)->siguiente;return;}
	else{
		e=q->siguiente;
		p->siguiente=e;
		free(q);
	}
		
}

int contar(int num,nodo_t *cabecera){
	int count=0;
	nodo_t *q = cabecera;
	while(q!=NULL){
		if(q->numero==num){count++;}
		q=q->siguiente;	
	}
	return count;
}

