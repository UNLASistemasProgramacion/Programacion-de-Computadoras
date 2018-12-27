#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED


struct JugadorEstructura;
typedef struct JugadorEstructura * Jugador;


//Pre:
//Post:
//Axiomas:
Jugador crearJugador(int DNI, char nombre[20], char apellido[20]);

//Pre:
//Post:
//Axiomas:
void mostrarJugador(Jugador j);

//Pre:
//Post:
//Axiomas:
void mostrarTitulos(Jugador j);

//Pre:
//Post:
//Axiomas:
Jugador agregarTitulo(Jugador j);


//deben agregar los get y set




#endif // JUGADOR_H_INCLUDED
