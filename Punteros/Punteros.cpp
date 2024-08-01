#include <iostream>
using namespace std;

int main()
{

	int z = 2;
	int k = 5;
	cout << "Punteros" << endl << endl;
	int x = 5;
	int* ptr;
	ptr = NULL;

	//Extraer la direcc de x y asiganarla a ptr
	ptr = &x;

	//cambiar el valor del puntero
	*ptr = 91;

	//Operaciones combinadas
	int a = *ptr - z + k;
	int b = z * *ptr;
	int c = b - a + ++(*ptr); //pre incremento
	cout << "valor a: " << a << endl;
	cout << "valor b: " << b << endl;;
	cout << "valor c: " << c;

	return 0;
}
