#include<stdio.h>
#include<stdlib.h>
#include "ListaEnc.h"
#include "persona.h"

ListaEnc* crearLista() {
    ListaEnc* lista = malloc(sizeof(*lista));
    if (lista == NULL)
        return NULL;
    lista->inicio = NULL;
    lista->tam = 0;
    return lista;
}

int liberarLista(ListaEnc* lista) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;

    // remove todos os elementos da lista
    while(!estaVacia(lista))
        remover(lista, NULL, 0);
    free(lista);
    lista = NULL;
    return OK;
}

int estaVacia(ListaEnc* lista) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (lista->inicio == NULL)
        return TRUE;
    return FALSE;
}

No* crearNo(Persona p, No* prox) {
	No *no = malloc(sizeof(*no));
	if (no == NULL)
        return NULL;
	no->p = p;
	no->prox = prox;
	return no;
}

int insertarInicio(ListaEnc* lista, Persona p) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    No *novoNo = crearNo(p, lista->inicio);
    if (novoNo == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    lista->inicio = novoNo;
    lista->tam++;
    return OK;
}

int insertar(ListaEnc* lista, Persona p, int pos) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (pos < 0 || pos > lista->tam)
        return INDICE_INVALIDO;

    No *novoNo;
    if (pos == 0) {
        return insertarInicio(lista, p);
    } else {
        // prepara para inserir
        No *aux;
        aux = lista->inicio;
        for(int i = 0; i < pos - 1; i++) {
            aux = aux->prox;
        }

        // adiciona o nó
        novoNo = novoNo = crearNo(p, aux->prox);
        if (novoNo == NULL)
            return ESTRUCTURA_NO_INICIALIZADA;
        aux->prox = novoNo;
    }
    lista->tam++;
    return OK;
}

int insertarFin(ListaEnc* lista, Persona p) {
    return insertar(lista, p, lista->tam);
}

int removerInicio(ListaEnc* lista, Persona *p) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (estaVacia(lista))
        return ESTRUCTURA_VACIA;
    No *aux = lista->inicio;
    if (p != NULL)
        *p = aux->p;
    lista->inicio = aux->prox;
    free(aux);
    aux = NULL;
    lista->tam--;
    return OK;

}

int remover(ListaEnc* lista, Persona *p, int pos) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (estaVacia(lista))
        return ESTRUCTURA_VACIA;
    if (pos < 0 || pos >= lista->tam)
        return INDICE_INVALIDO;

    No *ant, *atual;
    if (pos == 0) {
        return removerInicio(lista, p);
    } else {
        // prepara para remover
        ant = NULL;
        atual = lista->inicio;
        for(int i = 0; i < pos; i++) {
            ant = atual;
            atual = atual->prox;
        }

        // remove o nó atual
        ant->prox = atual->prox;
        if (p != NULL)
            *p = atual->p;
        free(atual);
        atual = NULL;
    }
    lista->tam--;
    return OK;
}

int removerFin(ListaEnc* lista, Persona *p) {
    return remover(lista, p, lista->tam - 1);
}

int obtenerElemento(ListaEnc* lista, Persona *p, int pos) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (estaVacia(lista))
        return ESTRUCTURA_VACIA;

    if (pos < 0 || pos >= lista->tam)
        return INDICE_INVALIDO;

    if (p== NULL)
        return PARAMETRO_INVALIDO;


    No *aux;
    aux = lista->inicio;
    for(int i = 0; i < pos; i++) {
        aux = aux->prox;
    }
    *p = aux->p;

    return OK;
}

int obtenerTamanio(ListaEnc* lista, int* tam) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (tam == NULL)
        return PARAMETRO_INVALIDO;
    *tam = lista->tam;
    return OK;
}

void imprimir(ListaEnc* lista) {
    int qtdeElementos;
    obtenerTamanio(lista, &qtdeElementos);
    printf("\n");
    Persona el;

    for(int i = 0;i < qtdeElementos; i++) {

        obtenerElemento(lista, &el, i);
        mostrarPersona(el);


    }
    printf("\n");
}





