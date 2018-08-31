#include "funciones.h"

/////////////////////////////////////////////////////////////////////
//Genero el funcionamiento de cargar datos
void cargar_dato(t_dato *d)
    {
    printf("\n\n Ingrese la edad: \t");
    scanf("%d",&d->edad);
    fflush(stdin);
    char n[20];
    printf("Ingrese el nombre: \n");
    gets(n);
    strcpy(d->nombre,n);
    }
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
void mostrar_dato(t_dato *d)
    {
    printf("\n\n Dato desenlistado: \t %d anios y su nombre es %s",d->edad, d->nombre);
    }

/////////////////////////////////////////////////////////////////////



