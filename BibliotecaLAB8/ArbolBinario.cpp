#include "ArbolBinario.h"

ArbolBinario::ArbolBinario() {
    raiz = nullptr;
}

void ArbolBinario::Insertar(Libro^ nuevoLibro) {
    InsertarRec(raiz, nuevoLibro);
}

void ArbolBinario::InsertarRec(Nodo^% nodo, Libro^ nuevoLibro) {
    if (nodo == nullptr) {
        nodo = gcnew Nodo(nuevoLibro);
    }
    else if (nuevoLibro->ISBN < nodo->libro->ISBN) {
        InsertarRec(nodo->izquierda, nuevoLibro);
    }
    else {
        InsertarRec(nodo->derecha, nuevoLibro);
    }
}

List<Libro^>^ ArbolBinario::ObtenerTodos() {
    List<Libro^>^ lista = gcnew List<Libro^>();
    ObtenerTodosRec(raiz, lista);
    return lista;
}

void ArbolBinario::ObtenerTodosRec(Nodo^ nodo, List<Libro^>^ lista) {
    if (nodo != nullptr) {
        ObtenerTodosRec(nodo->izquierda, lista);
        lista->Add(nodo->libro);
        ObtenerTodosRec(nodo->derecha, lista);
    }
}

Libro^ ArbolBinario::Buscar(int isbn) {
    Nodo^ resultado = BuscarRec(raiz, isbn);
    return resultado != nullptr ? resultado->libro : nullptr;
}

Nodo^ ArbolBinario::BuscarRec(Nodo^ nodo, int isbn) {
    if (nodo == nullptr || nodo->libro->ISBN == isbn) {
        return nodo;
    }
    else if (isbn < nodo->libro->ISBN) {
        return BuscarRec(nodo->izquierda, isbn);
    }
    else {
        return BuscarRec(nodo->derecha, isbn);
    }
}

void ArbolBinario::Eliminar(int isbn) {
    raiz = EliminarRec(raiz, isbn);
}

Nodo^ ArbolBinario::EliminarRec(Nodo^% nodo, int isbn) {
    if (nodo == nullptr) return nodo;
    if (isbn < nodo->libro->ISBN) {
        nodo->izquierda = EliminarRec(nodo->izquierda, isbn);
    }
    else if (isbn > nodo->libro->ISBN) {
        nodo->derecha = EliminarRec(nodo->derecha, isbn);
    }
    else {
        if (nodo->izquierda == nullptr) {
            return nodo->derecha;
        }
        else if (nodo->derecha == nullptr) {
            return nodo->izquierda;
        }

        Nodo^ temp = EncontrarMinimo(nodo->derecha);
        nodo->libro = temp->libro;
        nodo->derecha = EliminarRec(nodo->derecha, temp->libro->ISBN);
    }
    return nodo;
}

Nodo^ ArbolBinario::EncontrarMinimo(Nodo^ nodo) {
    Nodo^ actual = nodo;
    while (actual && actual->izquierda != nullptr) {
        actual = actual->izquierda;
    }
    return actual;
}
