#include "boolean.h"

const int TAM = 50;
typedef int arreglo [TAM];


//Carga del arreglo por teclado.
void CargaArreglo (arreglo a, int &n);

//Suma de los elementos del arreglo.
int SumaArreglo (arreglo a, int n);

//Promedio de dichos elementos.
float PromedioArreglo (arreglo a, int n);

//Desplegar el arreglo por pantalla.
void ImprimeArreglo (arreglo a, int n);

//Dado un entero determinar si pertenece o no al arreglo.
boolean PerteneceArreglo (arreglo a, int n, int valor);

//Dado un entero positivo, contar cuántos múltiplos de dicho entero hay en el arreglo.
int CuentaMultiplos (arreglo a, int n, int valor);

//Determinar cuál es el elemento mayor y devolverlo así como la posición que el mismo
//ocupa en el arreglo.
int MayorArreglo (arreglo a, int n, int &pos);

//Dado un arreglo devolver otro arreglo con los valores del anterior invertidos.
void InvierteArreglo (arreglo a, int n, arreglo &b);

//Devolver el primero y el último elemento del arreglo.
void ExtremosArreglo (arreglo a, int n, int &primero, int &ultimo);