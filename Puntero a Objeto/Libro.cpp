#include "Libro.h"

Libro::Libro(std::string ISBN, std::string titulo) {
        std::cout << "Se creo" << std::endl;
        this->ISBN = ISBN;
        this->titulo = titulo;
    }
    Libro:: ~Libro() {
        std::cout << "Se fue" << std::endl;
    }
    std::string Libro::getISBN() { return ISBN; }
    std::string Libro::getTitulo() { return titulo; }
    std::string Libro::toString() {
        std::stringstream s;
        s << "Libro" << std::endl << "ISBN: " << ISBN << std::endl << "Titulo: " << titulo << std::endl;
        return s.str();

    }