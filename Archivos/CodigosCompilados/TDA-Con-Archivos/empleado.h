#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED



struct EmpleadoEstructura;
typedef struct EmpleadoEstructura * Empleado;


Empleado crearEmpleado (char nombre[20], char apellido[20], int codigoEvento);
void mostrarEmpleado (Empleado e);


int getCodigoEvento(Empleado e);





#endif // EMPLEADO_H_INCLUDED
