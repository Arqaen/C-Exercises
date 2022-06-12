#include "funciones10.h"

int main(int argc,char *argv[]){
     
	int siz=argc-1;
	if(siz<1){exit(0);}
	
	nodo_t *raiz=NULL;
	
	for(int i=1;i<argc;i++){
		int num=atoi(argv[i]);
		raiz = insertar(raiz,num);
	}

	imprimir(raiz);
	
	int nodos=0;
	contarNodos(raiz,&nodos);
	
	nodo_t *eliminar;
	int i;
	
	do{
		printf("Introduce un nodo a eliminar ");
		scanf("%d",&i);
		eliminar=buscarNodo(i,raiz);		
		
	}while(eliminar==NULL);*/
	
	
	borrarNodo(eliminar);
	eliminar=NULL;
	imprimir(raiz);	
	borrarArbol(raiz);

}
