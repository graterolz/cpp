//CPP010 - Año bisiesto.
#include <iostream>
using namespace std;
int main() {
	int anio;
	cout << "Ingresa anio: ";
	cin >> anio;

	if (anio % 4 == 0  && (anio % 100 != 0  ||  anio % 400 == 0)){
		cout << "Es bisiesto.";
	}
	else {
		cout << "No es bisiesto.";
	}

	cin.get();
	return 0;
}
