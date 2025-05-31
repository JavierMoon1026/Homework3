#include "../header/generadorVectores.h"
#include "../header/asociadorEtiquetas.h"
#include <iostream>

int main() {
    DataBuilder builder;

    builder.add(1.3);
    builder.add(2.1);
    builder.add(3.2);

    builder.add(string("Hola"));
    builder.add(string("Mundo"));

    builder.add_list({1, 2});
    builder.add_list({3, 4});

    JsonBuilder json(builder);
    json.print_json();

    return 0;
}