#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "titulo.h"


struct TituloEstructura{

char nombreT[20];
int anio;
};

//pre:
//Post:
//Axiomas:
Titulo crearTitulo(char nombreT[20], int anio){

Titulo t = malloc(sizeof(struct TituloEstructura));

strcpy(t->nombreT, nombreT);
t->anio = anio;


return t;


}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//pre:
//Post:
//Axiomas:
void mostrarTitulo(Titulo t){

printf("-----Esto debe mostrar los datos del tiitulo\n");

};


/////////////////////////////////////////////////////////////////////////////////////////////////////////


//Agregar los get y set
