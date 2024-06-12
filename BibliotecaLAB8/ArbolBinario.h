#pragma once
#include "Libro.h"
#include "Nodo.h"
using namespace System::Collections::Generic;

ref class ArbolBinario {
private:
    Nodo^ raiz;

    void InsertarRec(Nodo^% nodo, Libro^ nuevoLibro);
    void ObtenerTodosRec(Nodo^ nodo, List<Libro^>^ lista);
    Nodo^ BuscarRec(Nodo^ nodo, int isbn);
    Nodo^ EliminarRec(Nodo^% nodo, int isbn);
    Nodo^ EncontrarMinimo(Nodo^ nodo);

public:
    ArbolBinario();

    void Insertar(Libro^ nuevoLibro);
    List<Libro^>^ ObtenerTodos();
    Libro^ Buscar(int isbn);
    void Eliminar(int isbn);
};
