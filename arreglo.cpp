#include <stdio.h>
#include <boolean.h>

const int TAM = 50;
typedef int arreglo [TAM];


//Carga del arreglo por teclado.
void CargaArreglo (arreglo a, int &n) {
    int i = 0;
    printf("Ingrese la cantidad de elementos del arreglo (maximo %d): ", TAM);
    scanf("%d", &n);
    if (n > TAM) n = TAM; // Asegurarse de no exceder el tamaño máximo
    for (i = 0; i < n; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

//Suma de los elementos del arreglo.
int SumaArreglo (arreglo a, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += a[i];
    }
    return suma;
}

//Promedio de dichos elementos.
float PromedioArreglo (arreglo a, int n){
    if (n == 0) return 0; // Evitar división por cero
    return (float)SumaArreglo(a, n) / n;
}

//Desplegar el arreglo por pantalla.
void ImprimeArreglo (arreglo a, int n){
    printf("Elementos del arreglo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

//Dado un entero determinar si pertenece o no al arreglo.
boolean PerteneceArreglo (arreglo a, int n, int valor){
    for (int i = 0; i < n; i++) {
        if (a[i] == valor) {
            return TRUE;
        }
    }
    return FALSE;
}

//Dado un entero positivo, contar cuántos múltiplos de dicho entero hay en el arreglo.
int CuentaMultiplos (arreglo a, int n, int valor){
    if (valor <= 0) return 0; // Evitar división por cero o negativos
    int cuenta = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % valor == 0) {
            cuenta++;
        }
    }
    return cuenta;
}

//Determinar cuál es el elemento mayor y devolverlo así como la posición que el mismo
//ocupa en el arreglo.
int MayorArreglo (arreglo a, int n, int &pos){
    if (n == 0) {
        pos = -1; // Indicar que no hay elementos
        return -1; // Valor inválido
    }
    int mayor = a[0];
    pos = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > mayor) {
            mayor = a[i];
            pos = i;
        }
    }
    return mayor;
}

//Dado un arreglo devolver otro arreglo con los valores del anterior invertidos.
void InvierteArreglo (arreglo a, int n, arreglo &b){
    for (int i = 0; i < n; i++) {
        b[i] = a[n - 1 - i];
    }
}

//Devolver el primero y el último elemento del arreglo.
void ExtremosArreglo (arreglo a, int n, int &primero, int &ultimo){
    if (n == 0) {
        primero = ultimo = -1; // Indicar que no hay elementos
        return;
    }
    primero = a[0];
    ultimo = a[n - 1];
}