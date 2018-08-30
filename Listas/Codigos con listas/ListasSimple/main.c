#include "funciones.h"

int main()
    {


    ///////////////////////////////////////////////////
    //Configuracion para poder poner tildes y ñ
    setlocale(LC_CTYPE,"Spanish");
    ///////////////////////////////////////////////////

    printf("////////////// UNLA PROGRAMACIÓN //////////// \n");
    printf("///// LISTA SIMPLEMENTE ENLAZADA ////////// \n");
    printf("////////////////////////////////////////// \n");


    //Creamos la lista, del tipo t_lista, se llama lista
    t_lista lista;
    //creamos el dato, del tipo t_dato, se llama dato
    t_dato dato;

    //Construimos la lista, es decir la iniciamos como nula
    crear_lista(&lista);

    //Vemos si la lista esta vacia o no
    //recordemos que se lo comparaba al null con *l
    if(lista_vacia(&lista)){
        printf("\n La lista esta vacía \n");}


    //Vemos si la lista esta llena o no, obviamente no lo esta
    if(lista_llena(&lista)){
        printf("\n La lista esta llena \n");}
    else{
        printf("\n La lista no esta llena \n");}


    printf("/////////////////////////////");
    printf("\n Cargamos 3 elementos \n");
    printf("/////////////////////////////");

    //Primer dato
    cargar_dato(&dato);
    //ponemos primero el primer dato
    poner_en_lista_primero(&lista,&dato);

    //Cargamos el 2do dato
    cargar_dato(&dato);
    //Lo volemos a poner primero
    poner_en_lista_primero(&lista,&dato);

    //Cargamos el 3er dato
    cargar_dato(&dato);
    //Y lo ponemos en la primer ubicacion de la lista
    poner_en_lista_primero(&lista,&dato);


    //Volvemos a ver si la lista esta llena o no
    if(lista_llena(&lista)){
        printf("\n La lista esta llena \n");}
    else{
        printf("\n La lista no esta llena \n");}


    printf("/////////////////////////////");
    printf("//////Ya cargamos los 3 datos////////");
    printf("/////////////////////////////");



    printf("\n Sacamos el último: \n");
    sacar_de_lista_ultimo(&lista,&dato);
    mostrar_dato(&dato);

    printf("\n Ponemos uno al final \n");
    cargar_dato(&dato);
    poner_en_lista_ultimo(&lista,&dato);

    printf("\n Sacamos el primero de la lista \n");
    sacar_de_lista_primero(&lista,&dato);
    mostrar_dato(&dato);

    printf("\n Insertamos algo por posición \n \t Ingrese posición (por favor: pos>0): \n\n\t");
    int pos;
    scanf("%d",&pos);
    cargar_dato(&dato);
    insertar_en_lista_por_posicion(&lista,&dato,&pos);



    printf("\n Saco de la lista hasta que queda vacía \n");
    while(!lista_vacia(&lista))
        {
        sacar_de_lista_primero(&lista,&dato);
        mostrar_dato(&dato);
        }

    printf("\n La lista quedó vacía \n");

    printf("\n Ingresamos un dato cualquiera: \n");
    cargar_dato(&dato);


    printf("\n Vacío la lista DE UNA \n");
    vaciar_lista(&lista);


    printf("\n\n Ahora voy a enlista los números 3, 6, 8 (en orden) \n");
    dato.numero=3;
    poner_en_lista_ultimo(&lista,&dato);
    dato.numero=6;
    poner_en_lista_ultimo(&lista,&dato);
    dato.numero=8;
    poner_en_lista_ultimo(&lista,&dato);

    printf("\n Ahora voy a ingresar el 3 en orden sin duplicado \n");
    dato.numero=3;

    if(!insertar_en_lista_ordenado_sin_duplicado(&lista,&dato,comparar_datos))
        printf("\n No se pudo insertar ya que el 3 ya está en la lista \n");

    printf("\n Ahora ingreso el 7 sin duplicado \n");
    dato.numero=7;
    if(insertar_en_lista_ordenado_sin_duplicado(&lista,&dato,comparar_datos))
        printf("\n Hecho \n");

    printf("\n Finalmente inserto en orden pero acepto duplicado--> ingreso el 6 \n");
    dato.numero=6;
    if(insertar_en_lista_ordenado_con_duplicado(&lista,&dato,comparar_datos))
        printf("\n Hecho \n");

    printf("\n Saco de la Lista hasta que queda vacía \n");
    while(!lista_vacia(&lista))
        {
        sacar_de_lista_primero(&lista,&dato);
        mostrar_dato(&dato);
        }

    printf("\n\n \t\t\t\t\t Fin del programa... \n\n");
    getch();
    return 0;
    }
