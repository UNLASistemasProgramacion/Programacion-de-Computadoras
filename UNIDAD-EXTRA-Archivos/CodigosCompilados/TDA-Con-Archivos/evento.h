#ifndef EVENTO_H_INCLUDED
#define EVENTO_H_INCLUDED

#include "empleado.h"


struct EventoEstructura;
typedef struct EventoEstructura * Evento;


Evento crearEvento (char nombre[20], int cantInvitados, int codigo);
void mostrarEvento(Evento e);


char *getNombre(Evento e);
int getCantInvitados(Evento e);
int getCodigo(Evento e);
int getEmpleadosCargados(Evento e);



void setNombre(Evento e, char nombre[20]);
void setCantInvitados(Evento e, int cantInvitados);
void setCodigo(Evento e, int codigo);





#endif // EVENTO_H_INCLUDED
