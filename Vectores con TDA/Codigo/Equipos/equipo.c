#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "equipo.h"
#include "jugador.h"


struct EquipoEstructura
{
    char nombreEquipo[20];
    int cantidadJugadores;
    char nombreEstadio[50];
    Jugador jugadores[23];
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////

//Pre:
//Post:
//Axiomas:
Equipo crearEquipo (char nombreEquipo[20], char nombreEstadio[50])
{

    Equipo e = malloc(sizeof(struct EquipoEstructura));

    strcpy (e->nombreEquipo, nombreEquipo);
    strcpy (e->nombreEstadio, nombreEstadio);
    e->cantidadJugadores = 0;



    return e;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//Pre:
//Post:
//Axiomas:
Equipo agregarJugador(Equipo e)
{

//Aqui deben pedir los datos del jugador, crear al jugador
// y asignarlo al vector de jugadores, una vez hecho, cantidadJugadores mas uno

    return e;
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////

//Pre:
//Post:
//Axiomas:
void mostrarEquipo(Equipo e)
{

    printf("--------------Esto debe mostrar al Equipo------------\n");

};


/////////////////////////////////////////////////////////////////////////////////////////////////////////

//Pre:
//Post:
//Axiomas:
void mostrarJugadores(Equipo e)
{


    printf("--------------Jugadores del equipo------------\n");
}
