#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

//incluyo todo lo que cree para las listas enlazadas
#include "lista_simplemente_enlazada.h"


//Declaro cargar datos, mostrar datos y comprar datos
//Dichas funciones estan diseñadas en funciones.c
void cargar_dato(t_dato*);
void mostrar_dato(t_dato*);

int comparar_datos(const void*,const void*);
