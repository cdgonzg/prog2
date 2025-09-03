#include "boolean.h"
#include "string.h"
#include "fecha.h"
#include "producto.h"
#include "arreglo_productos.h"
#include <stdio.h>

int main () {
    
    arreglo_productos ap;
    CargaArregloProductos(ap);
    ImprimeArregloProductos(ap, 3);
    return 0;
}
