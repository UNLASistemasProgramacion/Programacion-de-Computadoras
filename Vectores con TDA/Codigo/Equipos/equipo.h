#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED


struct EquipoEstructura;
typedef struct EquipoEstructura * Equipo;

//Pre:
//Post:
//Axiomas:
Equipo crearEquipo (char nombreEquipo[20], char nombreEstadio[20]);

//Pre:
//Post:
//Axiomas:
Equipo agregarJugador(Equipo e);

//Pre:
//Post:
//Axiomas:
void mostrarEquipo(Equipo e);

//Pre:
//Post:
//Axiomas:
void mostrarJugadores(Equipo e);


//Agregar los get y set



#endif // EQUIPO_H_INCLUDED
