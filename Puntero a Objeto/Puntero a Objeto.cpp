#include <iostream>
#include <sstream>
#include "Libro.h"
//class inline

int main()
{
    std::cout << "Objeto dinamico " << std::endl;
    //crear un puntero hacia un libro
    Libro* ptrL=NULL;
    //creacion de objeto dinamico
    ptrL = new Libro("4564", "Biblia");
    
    std::cout << "ISBN: " << ptrL->getISBN() << std::endl;
    std::cout << "Titulo: " << ptrL->getTitulo() << std::endl;

    //Eliminar objeto
    delete ptrL;
    return 0;
}


