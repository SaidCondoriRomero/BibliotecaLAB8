#include "Libro.h"

// Definici�n del constructor
Libro::Libro(int isbn, System::String^ titulo, System::String^ autor, System::String^ genero) {
    ISBN = isbn;
    Titulo = titulo;
    Autor = autor;
    Genero = genero;
}
