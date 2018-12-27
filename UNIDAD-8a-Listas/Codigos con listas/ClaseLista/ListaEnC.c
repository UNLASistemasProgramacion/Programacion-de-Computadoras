#include<stdio.h>
#include<stdlib.h>
#include "ListaEnc.h"

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

No* crearNo(int item, No* prox) {
	No *no = malloc(sizeof(*no));
	if (no == NULL)
        return NULL;
	no->item = item;
	no->prox = prox;
	return no;
}

int insertarInicio(ListaEnc* lista, int item) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    No *novoNo = crearNo(item, lista->inicio);
    if (novoNo == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    lista->inicio = novoNo;
    lista->tam++;
    return OK;
}

int insertar(ListaEnc* lista, int item, int pos) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (pos < 0 || pos > lista->tam)
        return INDICE_INVALIDO;

    No *novoNo;
    if (pos == 0) {
        return insertarInicio(lista, item);
    } else {
        // prepara para inserir
        No *aux;
        aux = lista->inicio;
        for(int i = 0; i < pos - 1; i++) {
            aux = aux->prox;
        }

        // adiciona o nó
        novoNo = novoNo = crearNo(item, aux->prox);
        if (novoNo == NULL)
            return ESTRUCTURA_NO_INICIALIZADA;
        aux->prox = novoNo;
    }
    lista->tam++;
    return OK;
}

int insertarFin(ListaEnc* lista, int item) {
    return insertar(lista, item, lista->tam);
}

int removerInicio(ListaEnc* lista, int* item) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (estaVacia(lista))
        return ESTRUCTURA_VACIA;
    No *aux = lista->inicio;
    if (item != NULL)
        *item = aux->item;
    lista->inicio = aux->prox;
    free(aux);
    aux = NULL;
    lista->tam--;
    return OK;

}

int remover(ListaEnc* lista, int* item, int pos) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (estaVacia(lista))
        return ESTRUCTURA_VACIA;
    if (pos < 0 || pos >= lista->tam)
        return INDICE_INVALIDO;

    No *ant, *atual;
    if (pos == 0) {
        return removerInicio(lista, item);
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
        if (item != NULL)
            *item = atual->item;
        free(atual);
        atual = NULL;
    }
    lista->tam--;
    return OK;
}

int removerFin(ListaEnc* lista, int* item) {
    return remover(lista, item, lista->tam - 1);
}

int obtenerElemento(ListaEnc* lista, int* item, int pos) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (estaVacia(lista))
        return ESTRUCTURA_VACIA;
    if (pos < 0 || pos >= lista->tam)
        return INDICE_INVALIDO;
    if (item == NULL)
        return PARAMETRO_INVALIDO;
    No *aux;
    aux = lista->inicio;
    for(int i = 0; i < pos; i++) {
        aux = aux->prox;
    }
    *item = aux->item;

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
    printf("[");
    for(int i = 0;i < qtdeElementos; i++) {
        int el;
        obtenerElemento(lista, &el, i);
        printf(" %d ", el);
    }
    printf("]\n");
}
