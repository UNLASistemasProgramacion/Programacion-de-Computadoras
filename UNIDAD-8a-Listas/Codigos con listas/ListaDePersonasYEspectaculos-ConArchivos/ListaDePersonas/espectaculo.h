#ifndef ESPECTACULO_H_INCLUDED
#define ESPECTACULO_H_INCLUDED



struct EspectaculoEstructura;
typedef struct EspectaculoEstructura * Espectaculo;


Espectaculo crearEspectaculo(char nombre[30], char descripcion[50], int codigo);


void mostrarEspectaculo(Espectaculo e);



#endif // ESPECTACULO_H_INCLUDED
