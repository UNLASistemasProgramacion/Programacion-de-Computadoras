#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED



struct MateriaEstructura;

typedef struct MateriaEstructura * Materia;

//PRE:
//POST:
//AXIOMAS:
Materia crearMateria(char nombre[20], int codigo);

//PRE:
//POST:
//AXIOMAS:
void mostrarMateria(Materia m);

//PRE:
//POST:
//AXIOMAS:
char* getNombre(Materia m);

//PRE:
//POST:
//AXIOMAS:
int getCodigo(Materia m);

//PRE:
//POST:
//AXIOMAS:
void setNombre(Materia m, char nombreNuevo[20]);

//PRE:
//POST:
//AXIOMAS:
void setCodigo(Materia m, int codigoNuevo);

//PRE:
//POST:
//AXIOMAS:
void agregarDocente (Materia m);



#endif // MATERIA_H_INCLUDED
