#include <stdio.h>
#include <string.h>
#include <conio.h>

#include "materia.h"
#include "docente.h"



struct MateriaEstructura{
char nombre[20];
int codigo;
Docente docentes[5];
int cantidad;
};




Materia crearMateria(char nombre[20], int codigo){

Materia m = malloc(sizeof(struct MateriaEstructura));

m->codigo = codigo;
m-> cantidad = 0;

strcpy (m->nombre, nombre);

return m;

}


void mostrarMateria(Materia m){

printf("%s  ------ %d \n", m->nombre, m->codigo);


for (int i = 0; i<m->cantidad; i++){
   mostrarDocente(m->docentes[i]);
}


}


void agregarDocente (Materia m){

int opcion = 5;

while (opcion!=0){


printf("Desea cargar un docente   SI ---1     NO -----0 \n");
scanf("%d", &opcion);


if (opcion == 1){
    Docente d = crearDocente();

    int posicion = m->cantidad;
    m->docentes[posicion] = d;

}//cierr el if

m->cantidad = m->cantidad +1;


}//cierra el while




}



char* getNombre(Materia m){

return m->nombre;
}

int getCodigo(Materia m){
return m->codigo;
}

void setNombre(Materia m, char nombreNuevo[20]){

strcpy(m->nombre, nombreNuevo);
}


void setCodigo(Materia m, int codigoNuevo){
    m->codigo = codigoNuevo;
}
