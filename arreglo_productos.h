#include <boolean.h>
#include <producto.h>

typedef producto arreglo_productos[50];

//Carga el arreglo de productos por teclado.
void CargaArregloProductos (arreglo_productos &ap);

//Imprime el arreglo de productos por pantalla.
void ImprimeArregloProductos (arreglo_productos ap, int n);

//Devuelve si exite o no un producto dado un numero.
boolean ExisteProducto (arreglo_productos ap, long int numero);

//Busca un producto por su número y devuelve su posición en el arreglo. Si no lo encuentra, devuelve -1.
int BuscaProductoPorNumero (arreglo_productos ap, long int numero);