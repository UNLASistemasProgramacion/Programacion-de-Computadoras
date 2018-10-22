#ifndef LISTA_ENC_H
#define LISTA_ENC_H

#define TRUE 1
#define FALSE 0

#define OK 1
#define ESTRUCTURA_NO_INICIALIZADA -1
#define ESTRUCTURA_VACIA-2
#define INDICE_INVALIDO -3
#define PARAMETRO_INVALIDO -4

#include "persona.h"

// Declaramos la estructura del nodo, prox es un puntero al siguiente nodo
typedef struct {
  Persona p;
  struct No* prox;
} No;


typedef struct {
  No* inicio;
  int tam;
} ListaEnc;


ListaEnc* crearLista();

int liberarLista(ListaEnc* lista);
int estaVacia(ListaEnc* lista);

int insertarInicio(ListaEnc* lista, Persona p);
int insertar(ListaEnc* lista, Persona p, int pos);
int insertarFin(ListaEnc* lista, Persona p);

int removerInicio(ListaEnc* lista, Persona *p);
int remover(ListaEnc* lista, Persona *p, int pos);
int removerFin(ListaEnc* lista, Persona *p);

int obtenerElemento(ListaEnc* lista, Persona *p, int pos);
int obtenerTamanio(ListaEnc* lista, int* tam);


void imprimir(ListaEnc* lista);

#endif


