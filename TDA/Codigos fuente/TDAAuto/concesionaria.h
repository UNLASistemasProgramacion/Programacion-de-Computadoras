#ifndef CONCESIONARIA_H_INCLUDED
#define CONCESIONARIA_H_INCLUDED

struct ConcesionariaEstructura;

typedef struct ConcesionariaEstructura * Concesionaria;


Concesionaria crearConcesionaria (char d[20], int a, char n[20]);

void mostrarConcesionaria(Concesionaria c);



#endif // CONCESIONARIA_H_INCLUDED
