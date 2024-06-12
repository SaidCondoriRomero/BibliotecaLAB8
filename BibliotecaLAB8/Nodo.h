#pragma once
#include "Libro.h"

ref class Nodo {
public:
    Libro^ libro;
    Nodo^ izquierda;
    Nodo^ derecha;

    // Solo declara el constructor
    Nodo(Libro^ libro);
};
