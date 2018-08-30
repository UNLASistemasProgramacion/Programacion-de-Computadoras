#include <stdlib.h>
#include <stdio.h>
#include "persona.h"



struct EstructuraPersona{
    char nombre[20];
    char apellido[20];
    int edad;
    float peso;
    long dni;
};



Persona crear(char n[20], char a[20], int e, float p, long d){

        struct EstructuraPersona * punteroPersona = malloc(sizeof(struct EstructuraPersona));

        punteroPersona->edad = e;
        punteroPersona->peso = p;
        punteroPersona->dni = d;

        strcpy(punteroPersona->nombre, n);
        strcpy(punteroPersona->apellido, a);



        return punteroPersona;

}


void imprimir(Persona persona){

    printf("La persona es: \n");
    printf("%s, %s que tiene %d anios, pesa %.2f kilos y su dni es %d: ", persona->nombre, persona->apellido, persona->edad, persona->peso, persona->dni);

}



void setEdad(Persona persona, int edadNueva){

            persona->edad = edadNueva;
}


int getEdad (Persona persona){
            int retorno = persona->edad;

            return retorno;
}


