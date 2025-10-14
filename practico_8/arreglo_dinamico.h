#ifndef _arreglo_dinamico_H
#define _arreglo_dinamico_H

#include <stdio.h>
#include "boolean.h"

typedef struct { int * arre;
                    int tamanio;
                } array_dinamico;


//Crear: Dados un arreglo dinámico y un entero n  0, reservar dinámicamente n celdas en memoria para el arreglo.
void Crear(array_dinamico & a, int n);

//Cargar: Dado un arreglo dinámico, cargarlo desde teclado.
void Cargar(array_dinamico & a);

//Desplegar: Dado un arreglo dinámico, desplegarlo por pantalla.
void Desplegar(array_dinamico a);

//Pertenece: Dados un arreglo dinámico y un valor entero, determinar si dicho valor
//pertenece al arreglo o no.
bool Pertenece(array_dinamico a, int valor);

//Promedio: Dado un arreglo dinámico, devolver el promedio de los valores
//almacenados en él.
float Promedio(array_dinamico a);

//MaxMin: Dado un arreglo dinámico, devolver el mayor y el menor entero almacenados en él.
void MaxMin(array_dinamico a, int & maximo, int & minimo);

//Iguales: Dados dos arreglos dinámicos, determina si son iguales o no (es decir, si
//tienen los mismos valores, y almacenados en las mismas posiciones).
boolean Iguales(array_dinamico a, array_dinamico b);

//CuantosPertenecen: Dados dos arreglos dinámicos, cuenta cuántos valores del
//primer arreglo pertenecen también al segundo arreglo.
int CuantosPertenecen(array_dinamico a, array_dinamico b);

//CopiarImpares: Dado un arreglo dinámico, construye y devuelve otro arreglo dinámico
//que contiene únicamente los valores impares del arreglo original.
void CopiarImpares(array_dinamico a, array_dinamico & impares);

//Destruir: Dado un arreglo dinámico, liberar la memoria ocupada por el mismo
void Destruir(array_dinamico & a);


#endif