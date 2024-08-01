#include <iostream>
using namespace std;

int main()
{
	//Puntero a string
	string nombre = "puntarenas";
	cout << nombre << endl;

	string nombre2 = string("Heredia");
	cout << nombre2 << endl;

	string* ptrS = NULL;
	ptrS = &nombre;
	cout << *ptrS;

	return 0;
}
