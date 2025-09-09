#ifndef EJERCICIO1_H
#define EJERCICIO1_H

#include "boolean.h"
#include "fecha.h"
#include "string.h"

//definicion de tipo de datos

//ejercicio 1.a

/***************************************************************************************/

//tipo de destinos nacionales posibles

typedef enum{Colonia, San_Jose, Florida, Canelones} destino_nacional;
typedef enum{Brasil, Argentina, Paraguay} destino_internacional;

typedef struct
{
    destino_internacional dest;
    int duracion;
} viaje_internacional;

typedef struct
{
    float costo;
    boolean es_internacional;
    union
    {
        destino_nacional viaje_nac;
        viaje_internacional viaje_int;
    } tipo_viaje;
} viaje;

/***************************************************************************************/

//ejercicio 1.b

/***************************************************************************************/
typedef enum {Economia, Politica, Informatica, Tecnologia} temas_reunion;

typedef struct 
{
    int hora;
    int minutos;
} hora;

typedef struct
{
    String persona;
    hora h;
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
        evento even;
        reunion reun;
    } tipo_encuentro;
} agenda;
/***************************************************************************************/

//ejercicio 1.c
/***************************************************************************************/
typedef enum {Tarantula, Viuda_Negra, Peluda} tipo;

typedef struct {
    float nivel_veneno;
    float peso;
} viuda;

typedef struct {
    boolean urticante;
    fecha fecha_hibernacion;
} peluda;

typedef struct{
    String nombre;
    int cant_patas;
    tipo arania;
    union {
        boolean come_ratones;
        viuda viuda;
        peluda peluda;
    } tipo_arania;
} arania;
/***************************************************************************************/


#endif