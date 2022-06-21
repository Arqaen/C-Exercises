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

	int nelementos;
	// Lectura del número de elementos que formarán el array
	printf("Introduzca el numero de elementos\n");
	scanf("%d", p_cadena->n_tiendas);

	p_cadena->n_tiendas = nelementos;

	// Reserva de memoria para nelementos
	p_cadena->p_tiendas = (tTienda *)calloc(nelementos, sizeof(tTienda));
	if (p_cadena->p_tiendas == NULL)
	{
		printf("Error al asignar memoria");
		return -1;
	}

	// printf("Introduzca la datos de contacto\n");
	// printf("Direccion: ");
	// scanf("%s", p_cadena->contacto->direccion);
	// printf("Tfno: ");
	// scanf("%s", p_cadena->contacto->tfno);
	// printf("Mail: ");
	// scanf("%s", p_cadena->contacto->e_mail);

	return 0;
}

int IniTiendas(tTienda *p_tiendas, int n_tiendas){return 1;}
int AnyadirTienda(tCadena *p_cadena){return 1;}

// int IniTienda(tTienda *pTienda);
// void IniPrendasUnaTienda(tPrenda *p_prendas, int n_prendas);
// void IniPrendasTiendas(tCadena cadena);