#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED

//Aca se define todas las funciones y procedimientos
//que tienen que ver con nuestro auto


//Declaramos la estructura
struct AutoStruct;


//Definimos un tipo de dato que es un  puntero llamado Auto que apunta a una estructura del tipo de arriba
//el cuerpo de estas estructuras estara en el .c
typedef struct AutoStruct* Auto;


//Este es el "Constructor del auto, es decir vamos a crear un Auto y retornarlo
//Pedimos como argumentos, todo lo que se necesita para crear el auto
Auto crear(int modelo, char nombre[20], int cantChoques);


//Aca declaramos el procedimiento para mostrar un auto, recibimos como argumento un Auto, ERA UN PUNTERO
void imprimir (Auto x);

//Creamos un auto pero pidiendo por teclado
Auto crearAutoPorTeclado ();






#endif // AUTO_H_INCLUDED
