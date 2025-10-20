int main () {
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

    
    
    return 0;
}