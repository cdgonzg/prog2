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

//devuelve la suma de los nodos del árbol
int suma_nodos(arbol_binario arbol){
    if (arbol == NULL) {
        return 0;
    } else {
        return arbol->dato + suma_nodos(arbol->izq) + suma_nodos(arbol->der);
    }
}

//listar impares de menor a mayor del arbol
void listar_impares(arbol_binario arbol){
    if (arbol != NULL) {
        listar_impares(arbol->izq);
        if (arbol->dato % 2 != 0) {
            printf("%d ", arbol->dato);
        }
        listar_impares(arbol->der);
    }
}

//obtener el máximo del árbol
// precondición: el árbol no es vacío
int obtener_maximo(arbol_binario arbol){
    arbol_binario actual = arbol;
    while (actual->der != NULL) {
        actual = actual->der;
    }
    return actual->dato;
}

//contar múltiplos de un número en el árbol
// precondición: numero != 0 y el árbol no es vacío
int contar_multiplos(arbol_binario arbol, int numero){
    int contador = 0;
    if (arbol->dato % numero == 0) {
        contador = 1;
    }
      return contador + contar_multiplos(arbol->izq, numero) + contar_multiplos(arbol->der, numero);
}

//sumar pares e impares en el árbol
void sumar_pares_impares(arbol_binario arbol, int & suma_pares, int & suma_impares){
    if (arbol != NULL) {
        if (arbol->dato % 2 == 0) {
            suma_pares += arbol->dato;
        } else {
            suma_impares += arbol->dato;
        }
        sumar_pares_impares(arbol->izq, suma_pares, suma_impares);
        sumar_pares_impares(arbol->der, suma_pares, suma_impares);
    }
}

//dado un valor determinar si es hoja del árbol
boolean es_hoja(arbol_binario arbol, int valor){
    if (arbol == NULL) {
        return FALSE;
    } else if (arbol->dato == valor) {
        if (arbol->izq == NULL && arbol->der == NULL) {
            return TRUE;
        } else {
            return FALSE;
        }
    } else if (valor < arbol->dato) {
        return es_hoja(arbol->izq, valor);
    } else {
        return es_hoja(arbol->der, valor);
    }
}

//listar nodos del nivel n
// precondición: n >= 0 y el árbol no es vacío
void listar_nivel(arbol_binario arbol, int n){
    if (n == 0 && arbol != NULL) {
        printf("Nivel %d: ", arbol->dato);
    }
    listar_nivel(arbol->izq, n - 1);
    listar_nivel(arbol->der, n - 1);
}

//calcula la profundidad de un nodo dado
// precondición: el valor existe en el árbol
int calcular_profundidad(arbol_binario arbol, int valor){
    if (arbol->dato == valor) {
        return 0;
    } else if (valor < arbol->dato) {
        return 1 + calcular_profundidad(arbol->izq, valor);
    } else {
        return 1 + calcular_profundidad(arbol->der, valor);
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

