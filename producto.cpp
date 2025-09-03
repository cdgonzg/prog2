#include "producto.h"

/*
    verificado que funciona
*/

//Carga el producto por teclado.
void CargaProducto (producto &p){
    printf("Ingrese el nombre del producto: ");
    scan(p.nombre);
    printf("Ingrese el numero del producto: ");
    scanf("%ld", &p.numero);
    printf("Ingrese el precio del producto: ");
    scanf("%f", &p.precio);
    printf("El producto esta en stock?");
    printf("\n");
    cargar(p.en_stock);
    printf("Ingrese la fecha de adquisición");
    printf("\n");
    CargaFecha(p.fecha_adquisicion);
}

//Devuelve el nombre del producto.
void NombreProducto(producto p, String &nombre){
    strcop(nombre, p.nombre);
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
    mostrar(p.en_stock);
    printf("\nFecha de adquisicion: %02d/%02d/%04d\n", p.fecha_adquisicion.dia, p.fecha_adquisicion.mes, p.fecha_adquisicion.anio);
}
