#include <stdio.h>

// Ejercicio 1
/*
Func1: N -> N
Func1(0) = 3
Func1(n) = n + Func1(n-1) (si n > 0)
Está correctamente definida porque para todo n en N, Func1(n) tiene un valor definido.
Func1(4) = 4 + Func1(3) = 4 + 3 + Func1(2) = 4 + 3 + 2 + Func1(1) = 4 + 3 + 2 + 1 + Func1(0) = 4 + 3 + 2 + 1 + 3 = 13

Func2: N -> N
Func2(0) = 1
Func2(n) = 3 * Func2(n) (si n > 0)
No está correctamente definida porque Func2(n) depende de sí misma para n > 0, lo que genera una definición circular sin un caso base adecuado para n > 0.
Func2(4) no está definido.

Func3: N -> N
Func3(n) = n + Func3(n-1)
No está correctamente definida porque no tiene un caso base. Por lo tanto, no se puede determinar un valor para Func3(n) para ningún n en N.
Func3(4) no está definido.

Func4: N -> N
Func4(0) = 2
Func4(1) = 1
Func4(n) = n + Func4(n-1) (si n es par y n > 1)
Func4(n) = n + Func4(n-2) (si n es impar y n > 1)
Está correctamente definida porque para todo n en N, Func4(n) tiene un valor definido.
Func4(4) = 4 + Func4(3) = 4 + 3 + Func4(1) = 4 + 3 + 1 = 8
*/
int func1(int n)
{
    if (n == 0)
    {
        return 3;
    }
    else
    {
        return n + func1(n - 1);
    }
}

int func4(int n)
{
    if (n == 0)
    {
        return 2;
    }
    else
    {
        if (n == 1)
        {
            return 1;
        }
        else
        {
            if (n % 2 == 0)
            {
                return n + func4(n - 1);
            }
            else
            {
                return n + func4(n - 2);
            }
        }
    }
}

// Ejercicio 2
// parte a
int Par(int n) {
    if (n == 0) {
        return 1; // TRUE
    } else {
            if (n == 1) {
                return 0; // FALSE
            } else {
                return Par(n - 2);
                }
        }
}

// parte b
int Suma(int n) {
    if (n == 0) {
        return 0;
    } else {
            if (Par(n) == 1) {
                return n + Suma(n - 2);
            } else {
                return Suma(n - 1);
            }
    }
}

// parte c
void ImprimirAsteriscos(int n) {
    if (n == 1) {
        printf("*");
    } else{
            printf("*");
            ImprimirAsteriscos(n - 1);
        }
}

// parte d
void ImprimirDecrecientes (int n){
    if (n == 1) {
        printf("1\n");
    } else {
        printf("%d\n", n);
        ImprimirDecrecientes(n - 1);
    }
}

// parte e
void ImprimirCrecientes (int n){
    if (n == 1) {
        printf("1\n");
    } else {
        ImprimirCrecientes(n - 1);
        printf("%d\n", n);
    }
}

// parte f
int Potencia (int base, int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * Potencia(base, exp - 1);
    }
}

// Ejercicio 3

int mcd(int p, int q) {
    if (q == 0)
        return p;
    
    int cociente = p / q;
    int resto = p - cociente * q;

    return mcd(q, resto);
}

int main () {

    int resultado_par = Par(6);
    printf("El resultado de Par(6) es: %d\n", resultado_par);
    int resultado_suma = Suma(6);
    printf("El resultado de Suma(6) es: %d\n", resultado_suma); 
    resultado_suma = Suma(5);
    printf("El resultado de Suma(7) es: %d\n", resultado_suma);
    printf("ImprimirAsteriscos(5): ");
    ImprimirAsteriscos(5);
    printf("\n");
    printf("ImprimirDecrecientes(5):\n");
    ImprimirDecrecientes(5);
    printf("ImprimirCrecientes(5):\n");
    ImprimirCrecientes(5);
    int resultado_potencia = Potencia(2, 3);
    printf("El resultado de Potencia(2, 3) es: %d\n", resultado_potencia);

   return 0; 
}