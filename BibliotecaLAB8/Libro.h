#pragma once

public ref class Libro {
public:
    int ISBN;
    System::String^ Titulo;
    System::String^ Autor;
    System::String^ Genero;

    // Declaraci�n del constructor
    Libro(int isbn, System::String^ titulo, System::String^ autor, System::String^ genero);
};
