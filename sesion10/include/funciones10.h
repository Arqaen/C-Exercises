 #include <stdio.h>
 #include <stdlib.h>
 
 struct nodo
 {
 	int id;
 	struct nodo *hijoI;
 	struct nodo *hijoD;
 };

typedef struct nodo nodo_t;
 
nodo_t *insertar(nodo_t *r,int num);
void imprimir(nodo_t *r);
nodo_t *buscarNodo(int dato,nodo_t *r);
void borrarNodo(nodo_t *r);
void contarNodos(nodo_t *r,int *nodo);
void borrarArbol(nodo_t *r);

