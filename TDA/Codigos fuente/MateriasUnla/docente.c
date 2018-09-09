#include <stdio.h>
#include <string.h>
#include <conio.h>

#include "docente.h"


struct DocenteEstructura{
char nombre[20];
char apellido[20];
int dni;


};



Docente crearDocente(){

Docente d = malloc(sizeof(struct DocenteEstructura));

fflush(stdin);
printf("Cual es el nombre: \n");
gets(d->nombre);
fflush(stdin);
printf("Cual es el apellido: \n");
gets(d->apellido);
fflush(stdin);
printf("Cual es el dni: \n");
scanf("%d", &d->dni);

return d;


}

void mostrarDocente(Docente d){

printf("%s   -------- %s ------ %d \n", d->nombre, d->apellido, d->dni);


};



char * getNombreDocente(Docente d);
char * getApellidoDocente (Docente d);
int getDniDocente(Docente d);


setNombreDocente(Docente d, char nombreNuevo[20]);
setApellidoDocente(Docente d, char apellidoNuevo[20]);
setDniDocente(Docente d, int dniNuevo);

