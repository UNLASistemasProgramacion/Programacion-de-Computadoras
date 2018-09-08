#include <stdlib.h>
#include <stdio.h>
#include "ListaEnc.h"
#include <string.h>



#include "persona.h"


struct PersonaEstructura{
        char nombre[20];
        char apellido[30];
        int dni;

        };


Persona crearPersona(){

Persona p = malloc(sizeof(struct PersonaEstructura));


char n[20];
char a[20];
fflush(stdin);
printf("Cual es el nombre: \n");
gets(n);
strcpy(p->nombre, n);

fflush(stdin);
printf("Cual es el apellido: \n");
gets(a);
strcpy(p->apellido, a);

fflush(stdin);
printf("Cual es el dni:\n");
scanf("%d", &p->dni);

return p;
}


void mostrarPersona(Persona p){

printf("nombre: %s  ----- apellido: %s  ------- DNI:  %d  \n", p->nombre, p->apellido, p->dni);
}
