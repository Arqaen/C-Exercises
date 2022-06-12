#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
	int numero;
	struct nodo *siguiente;
};
typedef struct nodo nodo_t;

void insertarInicio(int num,nodo_t **plista);
void imprimir(nodo_t *cabecera);
int insertarFinal(nodo_t *cabecera,int siz);
void borrar(nodo_t *cabecera);
void listaOrdenada(nodo_t *cabecera,int siz);
void mostrar(int pun[],int siz);
void eliminaNodo(int num,nodo_t **cabecera);
int contar(int num,nodo_t *cabecera);
