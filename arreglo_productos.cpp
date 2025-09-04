#include "arreglo_productos.h"
#include <stdio.h>

//Carga el arreglo de productos por teclado.
//no carga el nombre de los productos
void CargaArregloProductos (arreglo_productos &ap){
    for (int i = 0; i < MAX_P; i++){
        printf("Cargando producto %d:\n", i+1);
        CargaProducto(ap[i]);
    }
}

//Imprime el arreglo de productos por pantalla.
void ImprimeArregloProductos (arreglo_productos ap, int n){
    for(int i = 0; i < MAX_P; i++){
        printf("Producto %d:\n", i+1);
        ImprimeProducto(ap[i]);
    }
}

//Devuelve si exite o no un producto dado un numero.
boolean ExisteProducto (arreglo_productos ap, long int numero){
    int i = 0;
    boolean encontre = FALSE;
    while(i < MAX_P && !encontre){
        if(NumeroProducto(ap[i]) == numero){
            encontre = TRUE;
        }
    }
    return encontre;
}

//Busca un producto por su número y devuelve su posición en el arreglo. Si no lo encuentra, devuelve -1.
int BuscaProductoPorNumero (arreglo_productos ap, long int numero){
    int i = 0;
    boolean encontre = FALSE;
    while(i < MAX_P && !encontre){
        if(NumeroProducto(ap[i]) == numero){
            encontre = TRUE;
        }
    }
    return i;
}

//Calcular el promedio de los precios de los productos del arreglo.
float PromedioPrecios (arreglo_productos ap){
    float suma = 0.0;
    int contador = 0;
    float promedio = 0.0;
    for (int i = 0; i < MAX_P; i++) {
        suma += PrecioProducto(ap[i]);
        contador++;
    }
    if (contador != 0) {
        promedio = suma / contador;
    }
    return promedio;
}

//Dado un nombre, determinar cuántos productos con dicho nombre hay en el arreglo.
int CuentaProductosPorNombre (arreglo_productos ap, String nombre){
    int contador = 0;
    for (int i = 0; i < MAX_P; i++) {
        String nombre_producto;
        NombreProducto(ap[i], nombre_producto);
        if (streq(nombre_producto, nombre)) {
            contador++;
        }
    }
    return contador;
}

//Devolver cuantos productos están en stock y cuántos no lo están.
void CuentaProductosEnStock (arreglo_productos ap, int &en_stock, int &no_en_stock){
    en_stock = 0;
    no_en_stock = 0;
    for (int i = 0; i < MAX_P; i++) {
        if (EnStockProducto(ap[i])) {
            en_stock++;
        } else {
            no_en_stock++;
        }
    }
}

