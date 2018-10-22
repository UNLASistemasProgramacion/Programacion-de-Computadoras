#include <stdlib.h>
#include <stdio.h>
#include "ListaEnc.h"
#include <string.h>



#include "persona.h"
#include "espectaculo.h"


struct EspectaculoEstructura{

    char nombre[30];
    char descripcion[50];

    int codigo;
    ListaEnc* miLista; //Lista de personas
};



Espectaculo crearEspectaculo(char nombre[30], char descripcion[50], int codigo){

    Espectaculo e = malloc(sizeof(struct EspectaculoEstructura));

    strcpy(e->nombre, nombre);
    strcpy(e->descripcion, descripcion);
    e->codigo = codigo;

    e->miLista = crearLista();

    return e;


}


void mostrarEspectaculo(Espectaculo e){

    printf("Espectaculo numero: %d, denominado: %s, trata de: %s", e->codigo, e->nombre, e->descripcion);}




