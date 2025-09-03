#ifndef _arreglo_productos_H
#define _arreglo_productos_H

#include "boolean.h"
#include "producto.h"
#include <stdio.h>

typedef producto arreglo_productos[50];

//Carga el arreglo de productos por teclado.
void CargaArregloProductos (arreglo_productos &ap){
    int n;
    printf("Ingrese la cantidad de productos a cargar (maximo 50): ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Cargando producto %d:\n", i+1);
        CargaProducto(ap[i]);
    }
}

//Imprime el arreglo de productos por pantalla.
void ImprimeArregloProductos (arreglo_productos ap, int n){
    for(int i = 0; i < n; i++){
        printf("Producto %d:\n", i+1);
        ImprimeProducto(ap[i]);
    }
}

//Devuelve si exite o no un producto dado un numero.
boolean ExisteProducto (arreglo_productos ap, long int numero){
    for(int i = 0; i < 50; i++){
        if(NumeroProducto(ap[i]) == numero){
            return TRUE;
        }
    }
    return FALSE;
}

//Busca un producto por su número y devuelve su posición en el arreglo. Si no lo encuentra, devuelve -1.
int BuscaProductoPorNumero (arreglo_productos ap, long int numero){
    for(int i = 0; i < 50; i++){
        if(NumeroProducto(ap[i]) == numero){
            return i;
        }
    }
    return -1;
}

#endif
