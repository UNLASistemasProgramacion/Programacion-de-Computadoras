#include <stdio.h>
#include <string.h>


//creamos la estructura que guardara el nombre, apellido, edad y salario
struct ficha{
 char nombre[20]; /* nombre */
 char apellido[20]; /* apellido */
 int edad; /* edad */
 float salario; /* salario */
 };

//luego creamo una variable del tipo struc ficha
struct ficha mi_ficha; /* definimos mi_ficha del tipo estructura ficha */

//declaramos el procedimiento, Mostrar
void mostrar(struct ficha *p); /* prototipo de la función */


int main(void)
{

 struct ficha *st_ptr; /* un puntero a una estructura del tipo ficha */
 st_ptr = &mi_ficha; /* apuntamos el puntero a mi_ficha */

//Agregamos los datos
strcpy(mi_ficha.apellido,"Perez");
strcpy(mi_ficha.nombre,"Nicolas");
mi_ficha.edad = 28;


mostrar(st_ptr); /* Llamamos a la función pasándole el puntero */

return 0;
}

void mostrar(struct ficha *p)
{
printf("\n%s ", p -> nombre); /* p apunta a una estructura */
printf("%s \n", p -> apellido);
printf("%d\n", p -> edad);
}
