#include "cabecera.h"

void LeeCadena(char cadena[], char *p_mensaje, int max)
{
	char *p;
	int n;
	printf("Introduzca %s\n", p_mensaje);
	fflush(stdin);
	p = fgets(cadena, max, stdin);
	if (p != NULL)
	{
		n = strlen(cadena);
		if (n > 0 && cadena[n - 1] == '\n')
			cadena[n - 1] = '\0';
	}
}

int CrearTiendas(tCadena *p_cadena)
{
	// p_cadena = (tCadena *)malloc(sizeof(tCadena));
	// // Reserva de memoria para nelementos	
	// if (p_cadena == NULL)
	// {
	// 	printf("Error al asignar memoria");
	// 	return -1;
	// }
	
	// Lectura del número de elementos que formarán el array
	printf("Introduzca el numero de elementos\n");
	scanf("%d", &p_cadena->n_tiendas);
	
	p_cadena->p_tiendas = NULL;

	LeerContacto(&p_cadena->contacto);

	return 0;
}

int IniTiendas(tTienda *p_tiendas, int n_tiendas){

	int tmp;
	tmp = IniTienda(p_tiendas);

	// p_tiendas->p_prendas = ( tPrenda * )malloc(sizeof(tPrenda));
	// if (p_tiendas->p_prendas == NULL)
	// {
	// 	printf("Error al asignar memoria");
	// 	return -1;
	// }
	// IniPrendasUnaTienda(&p_tiendas->p_prendas, 1);

	return 0;
	
}

int IniTienda(tTienda *p_tiendas){

	p_tiendas = (tTienda *)malloc( sizeof(tTienda));
	if (p_tiendas == NULL)
	{
		printf("Error al asignar memoria");
		return -1;
	}

	printf("Introduzca la datos de la tienda\n");
	printf("Codigo: ");
	scanf("%d", &p_tiendas->codigo);
	printf("Numero de prendas: ");
	scanf("%d", &p_tiendas->n_prendas);

	LeerContacto(&p_tiendas->contacto);
	return 0;
}

void IniPrendasUnaTienda(tPrenda *p_prendas, int n_prendas){
	p_prendas = (tPrenda *)malloc(1*sizeof(tPrenda));
	for(int i=0; i<n_prendas; i++){
		IniPrenda(&p_prendas[i]);		
	}
}

void IniPrenda(tPrenda *p_prendas){

	printf("Introduzca la datos de la prenda\n");
	printf("Referencia: ");
	scanf("%s", p_prendas->ref);
	printf("Talla: ");
	scanf("%s", p_prendas->talla);

	printf("Color: ");
	scanf("%u", &p_prendas->color);
	printf("Tipo: ");
	scanf("%u", &p_prendas->tipo);

	printf("Hombre o mujer: ");
	scanf("%c", &p_prendas->h_m);
	printf("Unidades: ");
	scanf("%d", &p_prendas->n_uds);
	printf("Precio: ");
	scanf("%f", &p_prendas->precio);

}


void LeerContacto(tContacto *p_contacto){

	printf("Introduzca la datos de contacto\n");
	printf("Direccion: ");
	scanf("%s", p_contacto->direccion);
	printf("Tfno: ");
	scanf("%s", p_contacto->tfno);
	printf("Mail: ");
	scanf("%s", p_contacto->e_mail);

}


int AnyadirTienda(tCadena *p_cadena){return 1;}