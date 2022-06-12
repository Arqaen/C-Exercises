#include "funciones4.h"

tCumpleanios tomaDatos(void){

	tCumpleanios aux;
	
	printf("Dame nombre: ");
	scanf("%19[^\n]s",aux.nombre);
	printf("Dame Dia del cumpleaños: ");
	scanf("%u",&aux.fecha.dia);
	printf("Dame Mes del cumpleaños: ");
	scanf("%u",&aux.fecha.mes);	
	getchar();	
	return aux;
	}
	
	
	
void muestraDatos(tCumpleanios dato){
	printf("%s\tDia: %u\tMes: %u\n",dato.nombre,dato.fecha.dia,dato.fecha.mes);
}
	

void buscaAbril(tCumpleanios array[],int tam){

	int encontrado=0;
	for(int i=0;i<tam;i++){
		if(array[i].fecha.mes == 5){
			printf("Nacio en abril %s\n",array[i].nombre);
			encontrado=1;
		}
	}
	if(encontrado!=1){printf("Ninguno\n");}

}

void buscaUltimo(tCumpleanios array[],int tam){

	int z;
	int i=0;
	int x=array[0].fecha.mes;
	int j=array[0].fecha.dia;
	while(i<tam){
		if(x<array[i].fecha.mes){
			x=array[i].fecha.mes;
			z=i;
		}
		if(x==array[i].fecha.mes){
			if(j<array[i].fecha.dia){
				j=array[i].fecha.dia;
				z=i;
			}
		}
		i=i+1; 
	}
	
	printf("%s\tDia: %u\tMes: %u\n",array[z].nombre,array[z].fecha.dia,array[z].fecha.mes);
	
}

void buscaIgual(tCumpleanios array[],int tam){

  int imprimido=0;		
  for (int i=0; i<tam-1; i++)	
  {
    imprimido=0;		
    for (int j=i+1; j<tam; j++)		
    {
      if (array[i].fecha.mes==array[j].fecha.mes && array[i].fecha.dia==array[j].fecha.dia)	
      {
         if (!imprimido)		
         {  printf("\n%s, Mes %d, Dia %d\n", array[i].nombre, array[i].fecha.mes, array[i].fecha.dia);	
            imprimido=1;		
         }
         printf("%s, Mes %d, Dia %d\n", array[j].nombre, array[j].fecha.mes, array[j].fecha.dia);	
      }
    }
  }
}


