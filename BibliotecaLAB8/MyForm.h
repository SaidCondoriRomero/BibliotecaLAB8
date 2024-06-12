#pragma once

#include <msclr/marshal_cppstd.h>
#include "Libro.h"
#include "ArbolBinario.h"
#include "Nodo.h"

namespace BibliotecaLAB8 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            arbol = gcnew ArbolBinario();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ labelISBN;
    private: System::Windows::Forms::Label^ labelTitulo;
    private: System::Windows::Forms::Label^ labelAutor;
    private: System::Windows::Forms::Label^ labelGenero;
    private: System::Windows::Forms::TextBox^ textBoxISBN;
    private: System::Windows::Forms::TextBox^ textBoxTitulo;
    private: System::Windows::Forms::TextBox^ textBoxAutor;
    private: System::Windows::Forms::TextBox^ textBoxGenero;
    private: System::Windows::Forms::Button^ buttonVerLista;
    private: System::Windows::Forms::Button^ buttonAgregar;
    private: System::Windows::Forms::Button^ buttonBuscar;
    private: System::Windows::Forms::Button^ buttonEditar;
    private: System::Windows::Forms::Button^ buttonEliminar;
    private: System::Windows::Forms::ListBox^ listBoxLibros;

    private: ArbolBinario^ arbol;
    private: System::Windows::Forms::Label^ label1;

    private:
        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->labelISBN = (gcnew System::Windows::Forms::Label());
            this->labelTitulo = (gcnew System::Windows::Forms::Label());
            this->labelAutor = (gcnew System::Windows::Forms::Label());
            this->labelGenero = (gcnew System::Windows::Forms::Label());
            this->textBoxISBN = (gcnew System::Windows::Forms::TextBox());
            this->textBoxTitulo = (gcnew System::Windows::Forms::TextBox());
            this->textBoxAutor = (gcnew System::Windows::Forms::TextBox());
            this->textBoxGenero = (gcnew System::Windows::Forms::TextBox());
            this->buttonVerLista = (gcnew System::Windows::Forms::Button());
            this->buttonAgregar = (gcnew System::Windows::Forms::Button());
            this->buttonBuscar = (gcnew System::Windows::Forms::Button());
            this->buttonEditar = (gcnew System::Windows::Forms::Button());
            this->buttonEliminar = (gcnew System::Windows::Forms::Button());
            this->listBoxLibros = (gcnew System::Windows::Forms::ListBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // labelISBN
            // 
            this->labelISBN->AutoSize = true;
            this->labelISBN->Location = System::Drawing::Point(51, 49);
            this->labelISBN->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelISBN->Name = L"labelISBN";
            this->labelISBN->Size = System::Drawing::Size(92, 16);
            this->labelISBN->TabIndex = 0;
            this->labelISBN->Text = L"ISBN (CLAVE)";
            // 
            // labelTitulo
            // 
            this->labelTitulo->AutoSize = true;
            this->labelTitulo->Location = System::Drawing::Point(51, 98);
            this->labelTitulo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelTitulo->Name = L"labelTitulo";
            this->labelTitulo->Size = System::Drawing::Size(55, 16);
            this->labelTitulo->TabIndex = 1;
            this->labelTitulo->Text = L"TÍTULO";
            // 
            // labelAutor
            // 
            this->labelAutor->AutoSize = true;
            this->labelAutor->Location = System::Drawing::Point(51, 147);
            this->labelAutor->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelAutor->Name = L"labelAutor";
            this->labelAutor->Size = System::Drawing::Size(55, 16);
            this->labelAutor->TabIndex = 2;
            this->labelAutor->Text = L"AUTOR";
            // 
            // labelGenero
            // 
            this->labelGenero->AutoSize = true;
            this->labelGenero->Location = System::Drawing::Point(51, 196);
            this->labelGenero->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelGenero->Name = L"labelGenero";
            this->labelGenero->Size = System::Drawing::Size(65, 16);
            this->labelGenero->TabIndex = 3;
            this->labelGenero->Text = L"GÉNERO";
            // 
            // textBoxISBN
            // 
            this->textBoxISBN->BackColor = System::Drawing::SystemColors::InactiveCaption;
            this->textBoxISBN->Location = System::Drawing::Point(197, 49);
            this->textBoxISBN->Margin = System::Windows::Forms::Padding(4);
            this->textBoxISBN->Name = L"textBoxISBN";
            this->textBoxISBN->Size = System::Drawing::Size(132, 22);
            this->textBoxISBN->TabIndex = 4;
            // 
            // textBoxTitulo
            // 
            this->textBoxTitulo->BackColor = System::Drawing::SystemColors::InactiveCaption;
            this->textBoxTitulo->Location = System::Drawing::Point(197, 98);
            this->textBoxTitulo->Margin = System::Windows::Forms::Padding(4);
            this->textBoxTitulo->Name = L"textBoxTitulo";
            this->textBoxTitulo->Size = System::Drawing::Size(132, 22);
            this->textBoxTitulo->TabIndex = 5;
            // 
            // textBoxAutor
            // 
            this->textBoxAutor->BackColor = System::Drawing::SystemColors::InactiveCaption;
            this->textBoxAutor->Location = System::Drawing::Point(197, 147);
            this->textBoxAutor->Margin = System::Windows::Forms::Padding(4);
            this->textBoxAutor->Name = L"textBoxAutor";
            this->textBoxAutor->Size = System::Drawing::Size(132, 22);
            this->textBoxAutor->TabIndex = 6;
            // 
            // textBoxGenero
            // 
            this->textBoxGenero->BackColor = System::Drawing::SystemColors::InactiveCaption;
            this->textBoxGenero->Location = System::Drawing::Point(197, 196);
            this->textBoxGenero->Margin = System::Windows::Forms::Padding(4);
            this->textBoxGenero->Name = L"textBoxGenero";
            this->textBoxGenero->Size = System::Drawing::Size(132, 22);
            this->textBoxGenero->TabIndex = 7;
            // 
            // buttonVerLista
            // 
            this->buttonVerLista->Location = System::Drawing::Point(373, 25);
            this->buttonVerLista->Margin = System::Windows::Forms::Padding(4);
            this->buttonVerLista->Name = L"buttonVerLista";
            this->buttonVerLista->Size = System::Drawing::Size(100, 28);
            this->buttonVerLista->TabIndex = 8;
            this->buttonVerLista->Text = L"Ver Lista";
            this->buttonVerLista->UseVisualStyleBackColor = true;
            this->buttonVerLista->Click += gcnew System::EventHandler(this, &MyForm::buttonVerLista_Click);
            // 
            // buttonAgregar
            // 
            this->buttonAgregar->Location = System::Drawing::Point(373, 74);
            this->buttonAgregar->Margin = System::Windows::Forms::Padding(4);
            this->buttonAgregar->Name = L"buttonAgregar";
            this->buttonAgregar->Size = System::Drawing::Size(100, 28);
            this->buttonAgregar->TabIndex = 9;
            this->buttonAgregar->Text = L"Agregar";
            this->buttonAgregar->UseVisualStyleBackColor = true;
            this->buttonAgregar->Click += gcnew System::EventHandler(this, &MyForm::buttonAgregar_Click);
            // 
            // buttonBuscar
            // 
            this->buttonBuscar->Location = System::Drawing::Point(373, 123);
            this->buttonBuscar->Margin = System::Windows::Forms::Padding(4);
            this->buttonBuscar->Name = L"buttonBuscar";
            this->buttonBuscar->Size = System::Drawing::Size(100, 28);
            this->buttonBuscar->TabIndex = 10;
            this->buttonBuscar->Text = L"Buscar";
            this->buttonBuscar->UseVisualStyleBackColor = true;
            this->buttonBuscar->Click += gcnew System::EventHandler(this, &MyForm::buttonBuscar_Click);
            // 
            // buttonEditar
            // 
            this->buttonEditar->Location = System::Drawing::Point(373, 172);
            this->buttonEditar->Margin = System::Windows::Forms::Padding(4);
            this->buttonEditar->Name = L"buttonEditar";
            this->buttonEditar->Size = System::Drawing::Size(100, 28);
            this->buttonEditar->TabIndex = 11;
            this->buttonEditar->Text = L"Editar";
            this->buttonEditar->UseVisualStyleBackColor = true;
            this->buttonEditar->Click += gcnew System::EventHandler(this, &MyForm::buttonEditar_Click);
            // 
            // buttonEliminar
            // 
            this->buttonEliminar->Location = System::Drawing::Point(373, 222);
            this->buttonEliminar->Margin = System::Windows::Forms::Padding(4);
            this->buttonEliminar->Name = L"buttonEliminar";
            this->buttonEliminar->Size = System::Drawing::Size(100, 28);
            this->buttonEliminar->TabIndex = 12;
            this->buttonEliminar->Text = L"Eliminar";
            this->buttonEliminar->UseVisualStyleBackColor = true;
            this->buttonEliminar->Click += gcnew System::EventHandler(this, &MyForm::buttonEliminar_Click);
            // 
            // listBoxLibros
            // 
            this->listBoxLibros->BackColor = System::Drawing::SystemColors::InactiveCaption;
            this->listBoxLibros->FormattingEnabled = true;
            this->listBoxLibros->ItemHeight = 16;
            this->listBoxLibros->Location = System::Drawing::Point(27, 271);
            this->listBoxLibros->Margin = System::Windows::Forms::Padding(4);
            this->listBoxLibros->Name = L"listBoxLibros";
            this->listBoxLibros->Size = System::Drawing::Size(445, 196);
            this->listBoxLibros->TabIndex = 13;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(54, 483);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(406, 67);
            this->label1->TabIndex = 14;
            this->label1->Text = resources->GetString(L"label1.Text");
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(512, 569);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->listBoxLibros);
            this->Controls->Add(this->buttonEliminar);
            this->Controls->Add(this->buttonEditar);
            this->Controls->Add(this->buttonBuscar);
            this->Controls->Add(this->buttonAgregar);
            this->Controls->Add(this->buttonVerLista);
            this->Controls->Add(this->textBoxGenero);
            this->Controls->Add(this->textBoxAutor);
            this->Controls->Add(this->textBoxTitulo);
            this->Controls->Add(this->textBoxISBN);
            this->Controls->Add(this->labelGenero);
            this->Controls->Add(this->labelAutor);
            this->Controls->Add(this->labelTitulo);
            this->Controls->Add(this->labelISBN);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private: System::Void buttonVerLista_Click(System::Object^ sender, System::EventArgs^ e) {
        listBoxLibros->Items->Clear();
        List<Libro^>^ lista = arbol->ObtenerTodos();
        for each (Libro ^ libro in lista) {
            listBoxLibros->Items->Add(libro->ISBN + " - " + libro->Titulo + " - " + libro->Autor + " - " + libro->Genero);
        }
    }

    private: System::Void buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
        int isbn = Int32::Parse(textBoxISBN->Text);
        System::String^ titulo = textBoxTitulo->Text;
        System::String^ autor = textBoxAutor->Text;
        System::String^ genero = textBoxGenero->Text;
        Libro^ nuevoLibro = gcnew Libro(isbn, titulo, autor, genero);
        arbol->Insertar(nuevoLibro);
        MessageBox::Show("Libro agregado");
        textBoxISBN->Clear();
        textBoxTitulo->Clear();
        textBoxAutor->Clear();
        textBoxGenero->Clear();
    }
    private: System::Void buttonBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
        int isbn = Int32::Parse(textBoxISBN->Text);
        Libro^ libro = arbol->Buscar(isbn);
        if (libro != nullptr) {
            textBoxTitulo->Text = libro->Titulo;
            textBoxAutor->Text = libro->Autor;
            textBoxGenero->Text = libro->Genero;
            MessageBox::Show("Libro encontrado");
        }
        else {
            MessageBox::Show("Libro no encontrado");
        }
    }

    private: System::Void buttonEditar_Click(System::Object^ sender, System::EventArgs^ e) {
        int isbn = Int32::Parse(textBoxISBN->Text);
        Libro^ libro = arbol->Buscar(isbn);
        if (libro != nullptr) {
            libro->Titulo = textBoxTitulo->Text;
            libro->Autor = textBoxAutor->Text;
            libro->Genero = textBoxGenero->Text;
            MessageBox::Show("Libro editado");
        }
        else {
            MessageBox::Show("Libro no encontrado");
        }
    }

    private: System::Void buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
        int isbn = Int32::Parse(textBoxISBN->Text);
        arbol->Eliminar(isbn);
        MessageBox::Show("Libro eliminado");
        textBoxISBN->Clear();
        textBoxTitulo->Clear();
        textBoxAutor->Clear();
        textBoxGenero->Clear();
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
