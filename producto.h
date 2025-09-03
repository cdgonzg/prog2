#include "boolean.h"
#include "string.h"
#include "fecha.h"

typedef struct producto
{
    string nombre;
    long int numero;
    float precio;
    boolean en_stock;
    fecha fecha_adquisicion;
};

//Carga el producto por teclado.
void CargaProducto (producto &p);

//Devuelve el nombre del producto.
void NombreProducto (producto p, string &nombre);

//Devuelve el número del producto.
long int NumeroProducto (producto p);

//Devuelve el precio del producto.
float PrecioProducto (producto p);

//Devuelve si el producto está en stock o no.
boolean EnStockProducto (producto p);

//Devuelve la fecha de adquisición del producto.
fecha FechaAdquisicionProducto (producto p);

//Imprime el producto por pantalla.
void ImprimeProducto (producto p);
