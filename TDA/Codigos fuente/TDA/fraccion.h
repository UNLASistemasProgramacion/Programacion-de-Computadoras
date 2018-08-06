#ifndef FRACCION_H_INCLUDED
#define FRACCION_H_INCLUDED


struct FraccionStruct;
typedef struct FraccionStruct* Fraccion;


Fraccion crear(int n, int d);
int numerador(Fraccion x);
int denominador(Fraccion x);
Fraccion sumar(Fraccion x, Fraccion y);
Fraccion restar(Fraccion x, Fraccion y);
Fraccion multiplicar(Fraccion x, Fraccion y);
Fraccion dividir(Fraccion x, Fraccion y);
int iguales(Fraccion x, Fraccion y);
Fraccion simplificar(Fraccion fraccion);
void imprimir(Fraccion x);




#endif // FRACCION_H_INCLUDED
