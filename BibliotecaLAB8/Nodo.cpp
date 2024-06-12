#include "Nodo.h"

// Definición del constructor
Nodo::Nodo(Libro^ nuevoLibro) {
    libro = nuevoLibro;
    izquierda = nullptr;
    derecha = nullptr;
}
