#include "funciones9.h"

int main(int argc, char *argv[]){

	if (argc <= 1){printf("ERROR: no has introducido numeros\n");exit(0);}
	nodo_t *p_cab = NULL;
	int num;
	for(int i=1;i<argc;i++){
		num = atoi(argv[i]);
		insertarInicio(num,&p_cab);		
	}

	imprimir(p_cab);
	
	int siz=argc-1;
	siz = insertarFinal(p_cab,siz); imprimir(p_cab);	
	
	listaOrdenada(p_cab,siz);
	
	int eliminar;
	scanf("%d",&eliminar);
	int count = contar(eliminar,p_cab);	
	for(int s=0;s<count;s++){
		eliminaNodo(eliminar,&p_cab);
	}
	imprimir(p_cab);
	
	borrar(p_cab);
	
}
