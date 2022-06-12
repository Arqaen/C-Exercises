#include "funciones6.h"

int main(int argc, char *argv[]){

	if (argc!=2){printf("ERROR: debes aportar un nombre de fichero.\n"); exit(0);}	
	printf("%s\n",argv[1]);	
	
	escribirFichero(argv[1]);
	muestraFichero(argv[1]);
	
	char a[10];
	char b[10];
	
	printf("Cambiar el carater: ");
	scanf("%s",a);
	printf("Por el caracter: ");
	scanf("%s",b);
	
	
	modificarFichero(argv[1],a,b);
	
	
}
