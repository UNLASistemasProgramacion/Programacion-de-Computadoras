#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include "evento.h"
#include "empleado.h"




struct EventoEstructura{

    char nombre[20];
    int cantInvitados;
    int codigo;
    Empleado empleados[25];
    int empleadosCargados;

};



Evento crearEvento (char nombre[20], int cantInvitados, int codigo){


    Evento e = malloc(sizeof(struct EventoEstructura));

    e->cantInvitados = cantInvitados;
    e->codigo = codigo;
    strcpy(e->nombre, nombre);

    //Cantidad de empleados en el vector, inicialmente 0
    e->empleadosCargados = 0;



    /////////
    FILE * empleado;
    empleado = fopen("empleado.txt","r");


    while(!feof(empleado)){

        char auxEmpleado[100] = " ";

        fgets(auxEmpleado, 100, empleado);


        Empleado empl = crearEmpleadoDesdeChar(auxEmpleado);

        if (getCodigoEvento(empl) == e->codigo){
            e->empleados[e->empleadosCargados] = empl;
            e->empleadosCargados = e->empleadosCargados+1;
        }




    }


return e;
}



void mostrarEvento(Evento e){

        printf("El evento se llama %s, tendra %d invitados, su codigo es: %d, tiene un total de %d empleados cargados \n", e->nombre, e->cantInvitados, e->codigo, e->empleadosCargados);

        if(e->empleadosCargados>0){

            printf("Los cuales son: \n");


            for (int i = 0; i<e->empleadosCargados; i++){

                mostrarEmpleado(e->empleados[i]);
            }


        }


        printf("\n\n-----------------------\n\n");


}



char *getNombre(Evento e){ return e->nombre;};
int getCantInvitados(Evento e){return e->cantInvitados;};
int getCodigo(Evento e){return e->codigo;};
int getEmpleadosCargados(Evento e){return e->empleadosCargados;};
Empleado * getEmpleados(Evento e){return  e->empleados;};


void setNombre(Evento e, char nombre[20]){strcpy(e->nombre, nombre);};
void setCantInvitados(Evento e, int cantInvitados){e->cantInvitados = cantInvitados;};
void setCodigo(Evento e, int codigo){e->codigo= codigo;};
void setEmpleadosCargados(Evento e, int empleadosCargados){e->empleadosCargados = empleadosCargados;}
