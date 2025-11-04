#include "arbol.h"

//crear árbol vacío
void crear_arbol(arbol_binario & arbol){
    arbol = NULL;
}

//insertar un nodo en el árbol
void insertar_nodo(arbol_binario & arbol, int valor){
    if (arbol == NULL) {
        arbol = new nodo_arbol;
        arbol->dato = valor;
        arbol->izq = NULL;
        arbol->der = NULL;
    } else {
        if (valor < arbol->dato) {
            insertar_nodo(arbol->izq, valor);
        } else {
            insertar_nodo(arbol->der, valor);
        }
    }
}

//buscar un nodo en el árbol
boolean buscar_nodo(arbol_binario arbol, int valor){
    if (arbol == NULL) {
        return FALSE;
    } else if (arbol->dato == valor) {
        return TRUE;
    } else if (valor < arbol->dato) {
        return buscar_nodo(arbol->izq, valor);
    } else {
        return buscar_nodo(arbol->der, valor);
    }
}

//devolver la raíz del árbol
// precondición: el árbol no es vacío
int devolver_raiz(arbol_binario arbol){
    return arbol->dato;
}

//devolver el subárbol izquierdo
// precondición: el árbol no es vacío
arbol_binario devolver_izq(arbol_binario arbol){
    return arbol->izq;
}

//devolver el subárbol derecho
// precondición: el árbol no es vacío
arbol_binario devolver_der(arbol_binario arbol){
    return arbol->der;
}

//contar nodos del árbol
int contar_nodos(arbol_binario arbol){
    if (arbol == NULL) {
        return 0;
    } else {
        return 1 + contar_nodos(arbol->izq) + contar_nodos(arbol->der);
    }
}

//recorridos del árbol
void recorrer_preorden(arbol_binario arbol){
    if (arbol != NULL) {
        printf("%d ", arbol->dato);
        recorrer_preorden(arbol->izq);
        recorrer_preorden(arbol->der);
    }
}

void recorrer_orden(arbol_binario arbol){
    if (arbol != NULL) {
        recorrer_orden(arbol->izq);
        printf("%d ", arbol->dato);
        recorrer_orden(arbol->der);
    }
}

void recorrer_postorden(arbol_binario arbol){
    if (arbol != NULL) {
        recorrer_postorden(arbol->izq);
        recorrer_postorden(arbol->der);
        printf("%d ", arbol->dato);
    }
}

//destruir el árbol y liberar memoria
void destruir_arbol(arbol_binario & arbol){
    if (arbol != NULL) {
        destruir_arbol(arbol->izq);
        destruir_arbol(arbol->der);
        delete arbol;
        arbol = NULL;
    }
}

