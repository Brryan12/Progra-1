#include <iostream>
#include <sstream>
//class inline

class Libro {
private:
    std::string ISBN;
    std::string titulo;
public:
    Libro(std::string ISBN, std::string titulo) {
        this->ISBN = ISBN;
        this->titulo = titulo;
    }
    virtual ~Libro() {}
    std::string getISBN() { return ISBN; }
    std::string getTitulo() { return titulo; }
    std::string toString() {
        std::stringstream s;
        s << "Libro" << std::endl << "ISBN: " << ISBN << std::endl << "Titulo: " << titulo << std::endl;
        return s.str();

    }

};

int main()
{
    std::cout << "Objeto dinamico " << std::endl;
    //crear un puntero hacia un libro
    Libro* ptrL=NULL;
    //creacion de objeto dinamico
    ptrL = new Libro("4564", "Biblia");
    

    return 0;
}


