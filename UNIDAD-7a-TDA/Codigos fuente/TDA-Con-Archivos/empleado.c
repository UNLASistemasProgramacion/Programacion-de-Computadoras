#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include "empleado.h"




struct EmpleadoEstructura{
char nombre[20]; char apellido[20]; int codigoEvento;};


Empleado crearEmpleado (char nombre[20], char apellido[20], int codigoEvento){

        Empleado  e = malloc(sizeof(struct EmpleadoEstructura));


        strcpy(e->nombre, nombre);
        strcpy(e->apellido, apellido);
        e->codigoEvento = codigoEvento;

        return e;
}

void mostrarEmpleado (Empleado e){


printf("Empleado: %s, %s  , que pertenece al evento numero:  %d \n", e->apellido, e->nombre, e->codigoEvento);

}


int getCodigoEvento(Empleado e){return e->codigoEvento;};
