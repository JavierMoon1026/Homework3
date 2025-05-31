#include "../header/generadorVectores.h"
#include "../header/asociadorEtiquetas.h"
#include <iostream>

int main() {
    Generador generador;

    generador.agregar(1.3);
    generador.agregar(2.1);
    generador.agregar(3.2);

    generador.agregar(string("Hola"));
    generador.agregar(string("Mundo"));

    generador.agregar_lista({1, 2});
    generador.agregar_lista({3, 4});

    Asociador json(generador);
    json.print_json();

    return 0;
}