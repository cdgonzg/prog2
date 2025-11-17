#include <cassert>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

#include "arbol.h"

void imprimir_boolean(boolean valor) {
    std::cout << (valor == TRUE ? "TRUE" : "FALSE");
}

void mostrar_encabezado(const std::string &descripcion) {
    std::cout << "\n--- " << descripcion << " ---\n";
}

int main() {
    arbol_binario arbol;
    crear_arbol(arbol);

    std::vector<int> valores = {50, 30, 70, 20, 40, 60, 80, 65, 85, 10, 25};
    for (int valor : valores) {
        insertar_nodo(arbol, valor);
    }

    mostrar_encabezado("Estado inicial");
    std::cout << "Cantidad de nodos: " << contar_nodos(arbol) << " (esperado: "
              << valores.size() << ")\n";
    assert(contar_nodos(arbol) == static_cast<int>(valores.size()));

    std::cout << "Raiz del arbol: " << devolver_raiz(arbol) << "\n";
    assert(devolver_raiz(arbol) == 50);

    std::cout << "Subarbol izquierdo -> raiz: " << devolver_raiz(devolver_izq(arbol))
              << "\n";
    std::cout << "Subarbol derecho -> raiz: " << devolver_raiz(devolver_der(arbol))
              << "\n";

    mostrar_encabezado("Recorridos");
    std::cout << "Preorden: ";
    recorrer_preorden(arbol);
    std::cout << "\nInorden: ";
    recorrer_orden(arbol);
    std::cout << "\nPostorden: ";
    recorrer_postorden(arbol);
    std::cout << '\n';

    mostrar_encabezado("Busquedas");
    std::cout << "Buscar 40: ";
    imprimir_boolean(buscar_nodo(arbol, 40));
    std::cout << "\nBuscar 100: ";
    imprimir_boolean(buscar_nodo(arbol, 100));
    std::cout << '\n';

    mostrar_encabezado("Sumatorias");
    int suma_total = suma_nodos(arbol);
    std::cout << "Suma total de nodos: " << suma_total << '\n';
    int suma_verificada = std::accumulate(valores.begin(), valores.end(), 0);
    assert(suma_total == suma_verificada);

    int suma_pares = 0;
    int suma_impares = 0;
    sumar_pares_impares(arbol, suma_pares, suma_impares);
    std::cout << "Suma pares: " << suma_pares << " | Suma impares: " << suma_impares
              << '\n';

    mostrar_encabezado("Listados");
    std::cout << "Impares en orden: ";
    listar_impares(arbol);
    std::cout << "\nNivel 2: ";
    listar_nivel(arbol, 2);
    std::cout << '\n';

    mostrar_encabezado("Propiedades");
    std::cout << "Maximo del arbol: " << obtener_maximo(arbol) << '\n';
    assert(obtener_maximo(arbol) == 85);

    std::cout << "Cantidad de multiplos de 5: " << contar_multiplos(arbol, 5) << '\n';

    std::cout << "Profundidad del nodo 65: " << calcular_profundidad(arbol, 65)
              << '\n';

    std::cout << "Es hoja 25: ";
    imprimir_boolean(es_hoja(arbol, 25));
    std::cout << "\nEs hoja 30: ";
    imprimir_boolean(es_hoja(arbol, 30));
    std::cout << '\n';

    mostrar_encabezado("Destruccion");
    destruir_arbol(arbol);
    std::cout << "Arbol destruido. Nodos restantes: " << contar_nodos(arbol) << '\n';
    assert(arbol == NULL);

    std::cout << "\nTodas las pruebas finalizaron correctamente.\n";
    return 0;
}

