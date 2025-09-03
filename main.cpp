#include "boolean.h"
#include "string.h"
#include "fecha.h"
#include "producto.h"
#include <stdio.h>

int main () {
    
    producto p;
    CargaProducto(p);
    printf("\nProducto cargado:\n");
    ImprimeProducto(p);
    printf("\n");

    String nombre;
    NombreProducto(p, nombre);
    printf("\nNombre del producto: %s\n", nombre);

    return 0;
}
