#include "cabecera.h"

extern char Colores[10][10];
extern char TiposPrendas[8][10];

void ErrorMemoria(tCadena cadena, char *pcadena)
{
  printf("Error al reservar la memoria de %s\n",pcadena);
  LiberaMemoria(cadena);
  exit(-1);
}

void VisuCadena(tCadena cadena){

  printf("Numero de tiendas: %d\n",cadena.n_tiendas);
  VisuContacto(cadena.contacto);
  VisuTienda(cadena.p_tiendas);
  printf("\n");
}

void VisuContacto(tContacto contacto){

  printf("Direccion: %s\n",contacto.direccion);
  printf("Telefono: %s\n",contacto.tfno);
  printf("Email: %s\n",contacto.e_mail);

}

void VisuTienda(tTienda *tienda){  

  printf("Codigo: %d\n",tienda->codigo);
  printf("Numero de prendas: %d\n",tienda->n_prendas);
  // VisuContacto(tienda.contacto);
  printf("\n");

}

// void VisuPrenda(tPrenda prenda);