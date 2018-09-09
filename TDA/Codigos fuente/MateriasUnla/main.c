#include <stdlib.h>
#include "materia.h"
#include "funciones.h"
#include "docente.h"





int main() {


        separar("Creo una materia");
        Materia materia1 = crearMateria("Algoritmos", 1001);
        mostrarMateria(materia1);




        separar("Edito la materia");
        setNombre(materia1, "Algoritmos de UNLa");
        setCodigo(materia1, 1011);
        mostrarMateria(materia1);

        separar("Muestro con gets");
        printf("Muestro con los gets: ---> %d ----- %s \n", getCodigo(materia1), getNombre(materia1));

        separar("Agrego Docentes");
        agregarDocente(materia1);
        mostrarMateria(materia1);


}
