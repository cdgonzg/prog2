#ifndef EJERCICIO1_H
#define EJERCICIO1_H

#include "boolean.h"

//definicion de tipo de datos

//ejercicio 1.a

//tipo de destinos nacionales posibles
typedef enum{Colonia, San_Jose, Florida, Canelones, Brasil, Argentina, Paraguay} destino;

typedef struct
{
    float costo;
} viaje_nacional;

typedef struct
{
    float costo;
    int duracion;
} viaje_internacional;

typedef struct
{
    destino dest;
    boolean es_internacional;
    union
    {
        viaje_nacional viaje_nac;
        viaje_internacional viaje_int;
    } tipo_viaje;
} viaje;

//ejercicio 1.b
typedef enum {Economia, Politica, Informatica, Tecnologia} temas_reunion;



#endif