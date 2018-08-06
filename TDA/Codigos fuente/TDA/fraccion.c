#include <stdlib.h>
#include <stdio.h>
#include "fraccion.h"

struct FraccionStruct {
    int numerador;
    int denominador;
};

Fraccion crear(int n, int d) {
    struct FraccionStruct* fraccion = malloc(sizeof(struct FraccionStruct));
    fraccion->numerador = n;
    fraccion->denominador = d;
    return fraccion;
}

int numerador(Fraccion x) {
    return x->numerador;
}

int denominador(Fraccion x) {
    return x->denominador;
}

Fraccion sumar(Fraccion x, Fraccion y) {
    int numerador = x->numerador * y->denominador + x->denominador * y->numerador;
    int denominador = x->denominador * y->denominador;
    return crear(numerador, denominador);
}

Fraccion restar(Fraccion x, Fraccion y) {
    int numerador = x->numerador * y->denominador - x->denominador * y->numerador;
    int denominador = x->denominador * y->denominador;
    return crear(numerador, denominador);
}

Fraccion multiplicar(Fraccion x, Fraccion y) {
    int numerador = x->numerador * y->numerador;
    int denominador = x->denominador * y->denominador;
    return crear(numerador, denominador);
}

Fraccion dividir(Fraccion x, Fraccion y) {
    int numerador = x->numerador * y->denominador;
    int denominador = x->denominador * y->numerador;
    return crear(numerador, denominador);
}

int iguales(Fraccion x, Fraccion y) {
    return x->numerador * y->denominador == x->denominador * y->numerador;
}

int maximoComunDenominador(int mayor, int menor) {
    if (menor == 0) {
        return mayor;
    }
    if (menor > mayor) {
        return maximoComunDenominador(menor, mayor);
    }
    int resto = mayor % menor;
    return maximoComunDenominador(menor, resto);
}

Fraccion simplificar(Fraccion fraccion) {
    int mcd = maximoComunDenominador(fraccion->numerador, fraccion->denominador);
    int numerador = fraccion->numerador / mcd;
    int denominador = fraccion->denominador / mcd;
    return crear(numerador, denominador);
}

void imprimir(Fraccion x) {
    printf("%d/%d\n", x->numerador, x->denominador);
}
