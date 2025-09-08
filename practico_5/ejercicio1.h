#ifndef EJERCICIO1_H
#define EJERCICIO1_H

#include "boolean.h"
#include "fecha.h"
#include "string.h"

//definicion de tipo de datos

//ejercicio 1.a

/***************************************************************************************/
/*
    En todos los casos podemos hacer un arreglo con tope para almacenar
    los viajes en el primer caso
    las reuniones o eventos en el segundo caso
    y las arañas en el tercer caso
*/
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

/***************************************************************************************/

//ejercicio 1.b

/***************************************************************************************/
typedef enum {Economia, Politica, Informatica, Tecnologia} temas_reunion;

typedef struct
{
    String persona;
    int hora;
    temas_reunion tema;
} reunion;

typedef struct
{
    String pais;
    temas_reunion tema;
} evento;
typedef struct
{
    fecha dia;
    boolean es_reunion; //TRUE si es reunion, FALSE si es evento
    union {
        reunion reun;
        evento even;
    } tipo_encuentro;
} agenda;
/***************************************************************************************/

//ejercicio 1.c
/***************************************************************************************/
typedef struct {
    boolean come_ratones;
} tarantula;

typedef struct {
    float nivel_veneno;
    float peso;
} viudas;

typedef struct {
    boolean urticante;
    fecha fecha_hibernacion;
} peludas;

typedef struct{
    String nombre;
    int cant_patas;
    union {
        tarantula tara;
        viudas viuda;
        peludas peluda;
    } tipo_arania;
} arania;
/***************************************************************************************/


#endif