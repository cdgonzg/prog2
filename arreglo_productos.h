#ifndef ARREGLO_PRODUCTOS_H
#define ARREGLO_PRODUCTOS_H

#include "producto.h"

const int MAX_P = 3;
typedef producto arreglo_productos[MAX_P];

//Carga el arreglo de productos por teclado.
void CargaArregloProductos (arreglo_productos &ap);

//Imprime el arreglo de productos por pantalla.
void ImprimeArregloProductos (arreglo_productos ap, int n);

//Devuelve si exite o no un producto dado un numero.
boolean ExisteProducto (arreglo_productos ap, long int numero);

//Busca un producto por su número y devuelve su posición en el arreglo. Si no lo encuentra, devuelve -1.
int BuscaProductoPorNumero (arreglo_productos ap, long int numero);

//Calcular el promedio de los precios de los productos del arreglo.
float PromedioPrecios (arreglo_productos ap);

//Dado un nombre, determinar cuántos productos con dicho nombre hay en el arreglo.
int CuentaProductosPorNombre (arreglo_productos ap, String nombre);

//Devolver cuantos productos están en stock y cuántos no lo están.
void CuentaProductosEnStock (arreglo_productos ap, int &en_stock, int &no_en_stock);

#endif