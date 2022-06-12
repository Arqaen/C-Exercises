#include <stdio.h>


#ifndef _SESION4

	#define _SESION4
	
	// Definicion de constantes
	# define MAX_CUMPLEANIOS 5
	# define MAX_NOMBRE 20
	// Esto es un enumerado . Es un tipo que unicamente puede tomar esos valores

	enum tMes { Enero , Febrero , Marzo , Abril , Mayo , Junio , Julio , Agosto , Septiempre , Octubre ,
	Noviembre , Diciembre };

	// Esto es una estructura

	struct _fecha {
		unsigned int dia ;
		enum tMes mes ;
	};

	// Renombramos al struct para que sea mas facil de usar
	typedef struct _fecha tFecha ;
	// Declaramos un struct y lo renombramos en la misma declaracion
	typedef struct {
		char nombre [ MAX_NOMBRE ];
		tFecha fecha ;
	} tCumpleanios ;

	 
	tCumpleanios UnaPersona ; // Declaramos una variable de tipo tCumpleanios
	tCumpleanios Persona [ MAX_CUMPLEANIOS ]; // Declaramos un array de tipo tCumpleanios
	tCumpleanios tomaDatos(void);
	void muestraDatos(tCumpleanios dato);
	void buscaAbril(tCumpleanios array[],int tam);
	void buscaUltimo(tCumpleanios array[],int tam);
	void buscaIgual(tCumpleanios array[],int tam);

#endif
