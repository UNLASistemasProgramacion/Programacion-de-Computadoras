#ifndef LISTA_ENC_H
#define LISTA_ENC_H

#define TRUE 1
#define FALSE 0

#define OK 1
#define ESTRUCTURA_NO_INICIALIZADA -1
#define ESTRUCTURA_VACIA-2
#define INDICE_INVALIDO -3
#define PARAMETRO_INVALIDO -4

// Declaramos la estructura del nodo, prox es un puntero al siguiente nodo
typedef struct {
  int item;
  struct No* prox;
} No;


typedef struct {
  No* inicio;
  int tam;
} ListaEnc;


ListaEnc* crearLista();

int liberarLista(ListaEnc* lista);
int estaVacia(ListaEnc* lista);

int insertarInicio(ListaEnc* lista, int item);
int insertar(ListaEnc* lista, int item, int pos);
int insertarFin(ListaEnc* lista, int item);

int removerInicio(ListaEnc* lista, int* item);
int remover(ListaEnc* lista, int* item, int pos);
int removerFin(ListaEnc* lista, int* item);

int obtenerElemento(ListaEnc* lista, int* item, int pos);
int obtenerTamanio(ListaEnc* lista, int* tam);


void imprimir(ListaEnc* lista);

#endif


