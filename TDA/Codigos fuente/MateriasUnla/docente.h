#ifndef DOCENTE_H_INCLUDED
#define DOCENTE_H_INCLUDED

struct DocenteEstructura;
typedef struct DocenteEstructura * Docente;

//PRE:
//POST:
//AXIOMAS:
Docente crearDocente();


//PRE:
//POST:
//AXIOMAS:
void mostrarDocente(Docente d);


//PRE:
//POST:
//AXIOMAS:
char * getNombreDocente(Docente d);

//PRE:
//POST:
//AXIOMAS:
char * getApellidoDocente (Docente d);

//PRE:
//POST:
//AXIOMAS:
int getDniDocente(Docente d);

//PRE:
//POST:
//AXIOMAS:
setNombreDocente(Docente d, char nombreNuevo[20]);

//PRE:
//POST:
//AXIOMAS:
setApellidoDocente(Docente d, char apellidoNuevo[20]);

//PRE:
//POST:
//AXIOMAS:
setDniDocente(Docente d, int dniNuevo);



#endif // DOCENTE_H_INCLUDED
