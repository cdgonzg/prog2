#include "producto.h"

typedef struct producto
{
    string nombre;
    long int numero;
    float precio;
    boolean en_stock;
    fecha fecha_adquisicion;
};

//Carga el producto por teclado.
void CargaProducto (producto &p){
    printf("Ingrese el nombre del producto: ");
    scan(p.nombre);
    printf("Ingrese el numero del producto: ");
    scanf("%ld", &p.numero);
    printf("Ingrese el precio del producto: ");
    scanf("%f", &p.precio);
    printf("El producto esta en stock? (1 para si, 0 para no): ");
    CargaBooleano(p.en_stock);
    printf("Ingrese la fecha de adquisicion (dia mes anio): ");
    CargaFecha(p.fecha_adquisicion);
}

//Devuelve el nombre del producto.
void NombreProducto (producto p, string &nombre){
    strcop(p.nombre, nombre);
}

//Devuelve el número del producto.
long int NumeroProducto (producto p){
    return p.numero;
}

//Devuelve el precio del producto.
float PrecioProducto (producto p){
    return p.precio;
}

//Devuelve si el producto está en stock o no.
boolean EnStockProducto (producto p){
    return p.en_stock;
}

//Devuelve la fecha de adquisición del producto.
fecha FechaAdquisicionProducto (producto p){
    return p.fecha_adquisicion;
}

//Imprime el producto por pantalla.
void ImprimeProducto (producto p){
    printf("Nombre: %s\n", p.nombre);
    printf("Numero: %ld\n", p.numero);
    printf("Precio: %.2f\n", p.precio);
    printf("En stock: ");
    ImprimeBooleano(p.en_stock);
    printf("\nFecha de adquisicion: %02d/%02d/%04d\n", p.fecha_adquisicion.dia, p.fecha_adquisicion.mes, p.fecha_adquisicion.anio);
}
