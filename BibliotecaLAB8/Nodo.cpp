#include "Nodo.h"

// Definici�n del constructor
Nodo::Nodo(Libro^ nuevoLibro) {
    libro = nuevoLibro;
    izquierda = nullptr;
    derecha = nullptr;
}
