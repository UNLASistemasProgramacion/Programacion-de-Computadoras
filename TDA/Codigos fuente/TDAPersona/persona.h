#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED


struct EstructuraPersona;
typedef struct EstructuraPersona * Persona; //recordar que es un puntero


Persona crear(char nombre[20], char apellido[20], int edad, float peso, long dni);
void imprimir(Persona persona);


//El paradigma TDA nos obliga a  generar TODOS las funciones get y set, agarrar un valor y modificar
//un valor respectivamente, hare solo una de estas funciones, ustedes deben hacer todas las otras
void setEdad(Persona persona, int edadNueva);
int getEdad(Persona persona);

//Todas estas funciones ---PRIMITIVAS--- deben hacerlas ustedes
//Siempre tendran que poner los get y sets
void setPeso(Persona persona, float p);
void setDNI(Persona persona, long d);
void setNombre(Persona persona, char n[20]);
void setApellido(Persona persona , char a[20]);
long getDNI(Persona persona);
float getPeso(Persona persona);
//Ojo con los get de char... deberan usar punteros.. donde???
char getNombre (Persona persona);
char getApellido (Persona persona);


//Otras para que hagan ustedes
void crearPersonaPorTeclado(Persona persona);
int esMayorDeEdad(Persona persona);
//Devuelve cuanto deberia medir la persona para tener
//un peso inferiror a la normal, normal, superior a lo normal,
//y para ser obeso
void indiceDeMasaCorporal(Persona persona);






#endif // PERSONA_H_INCLUDED
