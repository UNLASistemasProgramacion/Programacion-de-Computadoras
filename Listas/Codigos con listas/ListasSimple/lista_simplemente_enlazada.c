#include<stdio.h>
#include<stdlib.h>

#include "lista_simplemente_enlazada.h"

void crear_lista(t_lista *l)
    {
    *l=NULL;
    printf("\n Se ha creado una lista \n");
    }

void vaciar_lista(t_lista *l)
    {
    t_nodo *aux;
    while(*l)
        {
        aux=*l;
        *l=aux->sig;
        free(aux);
        }
    }

int lista_llena(const t_lista *l)
    {
    void *aux=malloc(sizeof(t_nodo));
    free(aux);
    return aux==NULL;
    }

int lista_vacia(const t_lista *l)
    {
    return *l==NULL;
    }

int poner_en_lista_primero(t_lista *l,const t_dato *d)
    {
    t_nodo *nue=(t_nodo*)malloc(sizeof(t_nodo));
    if(!nue)
        return MEMORIA_LLENA;
    nue->dato=*d;
    nue->sig=*l;
    *l=nue;
    return OK;
    }

int poner_en_lista_ultimo(t_lista *l,const t_dato *d)
    {
    while(*l)
        l=&(*l)->sig;
    *l=(t_nodo*)malloc(sizeof(t_nodo));
    if(!*l)
        return MEMORIA_LLENA;
    (*l)->dato=*d;
    (*l)->sig=NULL;
    return OK;
    }

int sacar_de_lista_primero(t_lista *l,t_dato *d)
    {
    if(!*l)
        return LISTA_VACIA;
    t_nodo *aux=*l;
    *d=aux->dato;
    *l=aux->sig;
    free(aux);
    return OK;
    }

int sacar_de_lista_ultimo(t_lista *l,t_dato *d)
    {
    if(!*l)
        return LISTA_VACIA;
    while(!(*l)->sig)
        l=&(*l)->sig;
    t_nodo *aux=*l;
    *d=aux->dato;
    *l=NULL;
    free(aux);
    return OK;
    }

int insertar_en_lista_por_posicion(t_lista *l,const t_dato *d,int *pos)
    {
    t_nodo *nue=(t_nodo*)malloc(sizeof(t_nodo));
    if(!nue)
        return MEMORIA_LLENA;
    while(*l&&*pos>1)
        {
        l=&(*l)->sig;
        (*pos)--;
        }
    nue->dato=*d;
    nue->sig=*l;
    *l=nue;
    return OK;
    }

int insertar_en_lista_ordenado_con_duplicado(t_lista *l,const t_dato *d,t_cmp comparar)
    {
    int cmp;
    while(*l&&(cmp=comparar((void*)&(*l)->dato,(void*)d)<=0))
        l=&(*l)->sig;
    t_nodo *nue=(t_nodo*)malloc(sizeof(t_nodo));
    if(!nue)
        return MEMORIA_LLENA;
    nue->dato=*d;
    nue->sig=*l;
    *l=nue;
    return OK;
    }

int insertar_en_lista_ordenado_sin_duplicado(t_lista *l,const t_dato *d,t_cmp comparar)
    {
    int cmp;
    while(*l&&(cmp=comparar(&(*l)->dato,d)<0))
        l=&(*l)->sig;
    if(*l&&!cmp)
        return DUPLICADO;
    t_nodo *nue=(t_nodo*)malloc(sizeof(t_nodo));
    if(!nue)
        return MEMORIA_LLENA;
    nue->dato=*d;
    nue->sig=*l;
    *l=nue;
    return OK;
    }

/*
ESTA FUNCIÓN SOLO TIENE SENTIDO SI SE IMPLEMENTA CON UN DATO QUE CONTENGA LOS CAMPOS CLAVE Y CANTIDAD DE REPETICIONES

int insertar_si_no_existe_clave(t_lista *l,const t_dato *d,int clave)
    {
    while(*l&&(*l)->dato.clave!=clave)
        l=&(*l)->sig;
    if(*l)
        {
        ((*l)->dato.cant_rep)++;
        return CLAVE_DUPLICADA;
        }
    *l=(t_nodo*)malloc(sizeof(t_nodo));
    if(!*l)
        return MEMORIA_LLENA;
    (*l)->dato.clave=clave;
    (*l)->dato.cant_rep=0;
    (*l)->sig=NULL;
    return OK;
    }
*/

int buscar_en_lista_ordenada(t_lista *l,const t_dato *d,t_cmp comparar)
    {
    int cmp;
    while(*l&&(cmp=comparar((void*)&(*l)->dato,(void*)d))<0)
        l=&(*l)->sig;
    if(*l&&!cmp)
        return ENCONTRADO;
    return NO_ENCONTRADO;
    }

int buscar_en_lista_desordenada(t_lista *l,const t_dato *d,t_cmp comparar)
    {
    int cmp;
    while(*l&&(cmp=comparar((void*)&(*l)->dato,(void*)d))!=0)
        l=&(*l)->sig;
    if(*l&&!cmp)
        return ENCONTRADO;
    return NO_ENCONTRADO;
    }

int eliminar_por_clave_en_lista_desordenada(t_lista *l,void *clave,t_cmp comparar)
    {
    while(*l&&(comparar((void*)&(*l)->dato,clave)!=0))
        l=&(*l)->sig;
    if(!*l)
        return NO_ENCONTRADO;
    t_nodo *aux=*l;
    *l=aux->sig;
    free(aux);
    return OK;
    }

int eliminar_por_clave_en_lista_ordenada(t_lista *l,void *clave,t_cmp comparar)
    {
    int cmp;
    while(*l&&(cmp=comparar((void*)&(*l)->dato,clave))<0)
        l=&(*l)->sig;
    if(*l&&!cmp)
        {
        t_nodo *aux=*l;
        *l=aux->sig;
        free(aux);
        return OK;
        }
    return NO_ENCONTRADO;
    }

void eliminar_todas_ocurrencias_en_lista_ordenada(t_lista *l,void *clave,t_cmp comparar)
    {
    int cmp;
    t_nodo *aux;
    while(*l&&(cmp=comparar((void*)&(*l)->dato,clave))<=0)
        {
        if(!cmp)
            {
            aux=*l;
            *l=(*l)->sig;
            free(aux);
            }
        l=&(*l)->sig;
        }
    }

void eliminar_todas_ocurrencias_en_lista_desordenada(t_lista *l,void *clave,t_cmp comparar)
    {
    t_nodo *aux;
    while(*l)
        {
        if(!comparar((void*)&(*l)->dato,clave))
            {
            aux=*l;
            *l=(*l)->sig;
            free(aux);
            }
        l=&(*l)->sig;
        }
    }
