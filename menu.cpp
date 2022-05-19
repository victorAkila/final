#include <iostream>
using namespace std;


void MM () {
	cout << "1." << endl;
	cout << "salir" << endl;
	cout << "ingrese la opcion: ";
	int opcion;
	cin >> opcion;
	return opcion;
}
do {
	int opcion = mostrar menu();
	switch (opcion) {
	case 1:
		suma();
		break;
	case 2:
		break;
	default:
		break;
	}
} while ()
int sum() {
	int x, y;
	cin >> x >> y;
	int suma = x + y;
	cout >> suma;
}
int mul() {
	int x;
	cin >> x;
	int z = x * x;
	cout << z;
	return z;
}
int sup() {
	int r;
	cin >> r;
	int pi = 3.1416;
	int superficie = pi * r * r;
	cout << superficie;
}
int calculo() {
	int r, h;
	cin >> r;
	cin >> h;
	int cil = calculo(r, h);
	int pi = 3.1416;
	int a = (2 * pi * r * h) + (2 * pi * (r * r));
	int v = (pi * (r * r)) * h;
	cout << "el volumen es: " << v << " el area es: " << a;
}
int pa() {
	int l;
	cin >> l;
	int p = 4 * l;
	int a = l * l;
	cout << "el perimetro es: " << p << " el area es: " << a;
}