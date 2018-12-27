#include <stdlib.h>
#include <stdio.h>

//incluimos todo el esqueleto que teniamos en el .h, asi ya tenemos definidas
//las funciones, los procedimientos y las estructuras
//debemos respetar esta estructura!!!!!!!!
#include "auto.h"


//Le damos cuerpo a la estructura que habiamos declarado
struct AutoStruct {
    int modelo;
    char nombre[20];
    int cantChoques;
};

//Creamos la funcion crear auto el CONSTRUCTOR
Auto crear(int modelo, char nombre[20], int cantChoques) {

    //Creamos auto, que es un puntero a una estructura del tipo auto
    //reservamos memoria para una estructura de este tipo por medio de malloc
    struct AutoStruct* autoPuntero = malloc(sizeof(struct AutoStruct));

    //le damos el valor que recibimos como argumento a la funcion
    autoPuntero->modelo = modelo;
    strcpy(autoPuntero->nombre, nombre);
    autoPuntero->cantChoques = cantChoques;

    //retornamos un auto, recordar que auto es un punterooooo
    return autoPuntero;
}


//Mostramos algun auto
void imprimir(Auto x) {
    printf("El modelo del auto es: %d \nEs un %s \nCon cantidad de choques: %d\n", x->modelo, x->nombre,  x->cantChoques);
}


//Creamos un auto pero pidiendo por teclado
Auto crearAutoPorTeclado (){

    int modelo = 0;
    char nombre[20] = "";
    int cantChoques = 0;

    printf("Por favor ingrese el modelo del auto: \n");
    scanf("%d", &modelo);
    fflush(stdin);

     printf("Por favor ingrese el nombre del auto: \n");
    gets(nombre);
    fflush(stdin);

     printf("Por favor ingrese la cantidad de choques del auto: \n");
    scanf("%d", &cantChoques);
    fflush(stdin);


    struct AutoStruct *autoPuntero = malloc(sizeof(struct AutoStruct));


    return crear(modelo, nombre, cantChoques);



}
