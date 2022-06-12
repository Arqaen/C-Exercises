#include "funciones10.h"

nodo_t *insertar(nodo_t *r,int num){

	if(r==NULL){
		r = (nodo_t *) malloc (sizeof(nodo_t)+10);
		if(r==NULL){exit(0);}
		r->id=num;
		r->hijoI=NULL;
		r->hijoD=NULL;
	}
	else{
	
		if(num<r->id){
			r->hijoI=insertar(r->hijoI,num);
		}
		
		if(num>r->id){
			r->hijoD=insertar(r->hijoD,num);
		}
	
	}	
	
	return r;
}


void imprimir(nodo_t *r){

	if(r!=NULL){
		imprimir(r->hijoI);
		printf("%d\n",r->id);
		imprimir(r->hijoD);
	}
}

void contarNodos(nodo_t *r, int *nodo){
	if(r!=NULL){
		contarNodos(r->hijoI,nodo);
		*nodo=*nodo+1;		
		contarNodos(r->hijoD,nodo);
	}
}

nodo_t *buscarNodo(int dato,nodo_t *r){
	if(r==NULL){return r;}
	if(r->id>dato){return buscarNodo(dato,r->hijoI);}
	if(r->id<dato){return buscarNodo(dato,r->hijoD);}	
	else return r;
	
}

void borrarNodo(nodo_t *r){
	if(r!=NULL){		  
		borrarNodo(r->hijoI);
		borrarNodo(r->hijoD);
		free(r);
	}
}


void borrarArbol(nodo_t *r){
	
	if(r!=NULL){
		borrarArbol(r->hijoI);
		borrarArbol(r->hijoD);
		free(r);
	}
}


