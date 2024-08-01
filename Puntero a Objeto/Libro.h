#pragma once
#include <iostream>
#include <sstream>

class Libro {
private:
    std::string ISBN;
    std::string titulo;
public:
    Libro(std::string ISBN, std::string titulo);
    virtual ~Libro();
    std::string getISBN();
    std::string getTitulo();
    std::string toString();

};