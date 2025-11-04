#ifndef ARBOL_H 
#define ARBOL_H

#include <stdio.h>
#include "boolean.h"

// Definición del tipo de dato nodo_arbol
typedef struct nodo_arbol {
    int dato;
    struct nodo_arbol* izq;
    struct nodo_arbol* der;
} nodo_arbol;

// Definición del tipo de dato arbol_binario
typedef nodo_arbol* arbol_binario;

// Prototipos de las funciones para el manejo del árbol binario

//crear árbol vacío
void crear_arbol(arbol_binario & arbol);

//insertar un nodo en el árbol
void insertar_nodo(arbol_binario &arbol, int valor);

//devolver la raíz del árbol
int devolver_raiz(arbol_binario arbol);

//devolver el subárbol izquierdo
arbol_binario devolver_izq(arbol_binario arbol);

//devolver el subárbol derecho
arbol_binario devolver_der(arbol_binario arbol);

//buscar un nodo en el árbol
boolean buscar_nodo(arbol_binario arbol, int valor);

//contar nodos del árbol
int contar_nodos(arbol_binario arbol);

//recorridos del árbol
void recorrer_preorden(arbol_binario arbol);
void recorrer_orden(arbol_binario arbol);
void recorrer_postorden(arbol_binario arbol);

//destruir el árbol y liberar memoria
void destruir_arbol(arbol_binario & arbol);



#endif